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

int mve = 0, x=0;



bool goal(int n, int m)
{
    if(n == m)
        return 1;
    if(n>m)
        return 0;
    else
    {
        //Option 1 MULT 2
        //Do
        x = n*2;
        mve+=1;
        //Recurse
        if(goal(x, m))
            return true;
        // Undo
        x = n/2;
        mve--;

        //Optoin 2 MULT 3
        //Do
        x = n*3;
        mve++;
        //Recurse
        if(goal(n*3, m))
            return true;
        //Undo
        x = n/3;
        mve--;
    }
    return false;


}

int main()
{
    FIO

    int n, m;
    cin >> n >> m;

    cout << (goal(n,m) ? mve : -1);
    return 0;
}