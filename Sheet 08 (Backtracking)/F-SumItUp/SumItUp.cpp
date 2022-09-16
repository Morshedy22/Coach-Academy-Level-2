#include <bits/stdc++.h>

using namespace std;

#define FIO ios_base::sync_with_stdio(false);cin.tie(nullptr);
#define F first
#define S second
#define pb push_back
#define all(v) v.begin(),v.end()
#define FILL(a, b) memset(a, b, sizeof(a))
#define endl '\n'

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<pii, int> piii;
typedef vector<int> vi;
typedef vector<pii> vii;

const int INF = 0x3f3f3f3f;
const ll INFL = 0x3f3f3f3f3f3f3f3fLL;

set<vi> st;
vi goal;
int sum = 0;
void generateTarget(int indx, vi& vec, int sz, int t)
{
    if(sum == t)
        st.insert(goal);

    if(indx == sz || sum > t)
        return;
    
    
    //Option 1 Take
    //Do
    sum += vec[indx];
    goal.push_back(vec[indx]);
    //Recurse
    generateTarget(indx+1, vec, sz, t);
    //Undo
    sum-= vec[indx];
    goal.pop_back();

    //Option 2 Leave
    generateTarget(indx+1, vec, sz, t);

    return;
}

int main()
{
    FIO
    int t, n;
    while (cin >> t >> n)
    {
        if(n==0)
            break;

        vi vec(n);  

        for(auto& i : vec) cin >> i;

        goal.clear(); st.clear();
        generateTarget(0, vec, n, t);

        cout << "Sums of " << t << ":\n";
        if(!st.empty())
        {
            auto it = st.end(); // 3shan abtdy zaee m output 3ayez
            it--; // iterator da bybos 3la vector

            for(;;it--)
            {
                vi cur = *it; // f hnsheel al vector fe current 3shan nshtghl 3leeh
                int sz = cur.size();
                for(int i=0; i<sz; i++)
                {
                    cout << cur[i];
                    if(i == sz-1)
                        cout << "\n";
                    else
                        cout << "+";
                }

                if(it==st.begin()) // hno2f lma nosl ll begin
                    break;

            }
        }
        else
            cout << "NONE\n";

    }
    

    return 0;
}