#include <bits/stdc++.h>

using namespace std;

#define FIO ios_base::sync_with_stdio(false);cin.tie(nullptr);
#define f first
#define s second
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

int t, n;
vi v, temp;

pair<vi, int> ans{0,0};


void generatePowerset(int indx, int sum=0)
{
    if(sum > t)
        return;
    if(indx == n)
    {
        if(sum > ans.s || (sum > ans.s && temp.size() > ans.f.size()))
            ans = {temp, sum};
        return;
    }
    
    // Option 1
    // Take
    // Do
    temp.push_back(v[indx]);
    // Recurse
    generatePowerset(indx+1, sum+v[indx]);
    // Undo
    temp.pop_back();

    // Option 2
    // Leave
    generatePowerset(indx+1, sum);

}

int main()
{
    FIO

    while(cin >> t >> n)
    {
        //
        // clear all variable
        v.clear(); temp.clear();
        ans.f.clear();
        ans.s = 0;
        //


        int y;
        for(int i=0; i<n;i++)
        {
            cin >> y;
            v.push_back(y);
        }
        
        generatePowerset(0);
        for(auto x : ans.f)
            cout << x << " ";
        cout << "sum:" << ans.s << endl; 

    }

    return 0;
}