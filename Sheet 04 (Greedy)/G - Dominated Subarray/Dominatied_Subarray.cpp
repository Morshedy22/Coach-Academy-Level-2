#include <bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);
#pragma GCC optimize "trapv"
#define endl '\n'
typedef long long ll;

int main()
{
    FIO

    int t;
    cin >> t;

    while(t--)
    {

        int n, x, mn =INT_MAX; 
        cin >> n;
        map<int, int> mp;
        for(int i=0; i<n; i++)
        {
            cin >> x;
            if(mp.count(x)==0)
                mp[x] = i;
            else
            {
                mn = min(mn, i+1-mp[x]);
                mp[x] = i;
            }
        }

        if(mn == INT_MAX)
            cout << -1 << endl;
        else
            cout << mn << endl;
    }

}