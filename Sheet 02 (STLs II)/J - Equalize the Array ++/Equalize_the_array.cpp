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
    while (t--)
    {
        int x,n;
        map<int , int> freq;
        vector<int> v;
        cin >> n;
        for(int i=0; i<n; i++)
        {
            cin >> x;
            freq[x]++;
        }

        for(auto [f, s] : freq)
            v.push_back(s);
        
        sort(v.begin(), v.end());

        int ans = INT_MAX, sz = (int)v.size();
        
        
        for(int i=0; i<sz; i++)
        {
            
            ans = min(ans, n - (v[i] * (sz-i ) ) ); // lsa msh fahm alhta de awy bs hya fkra alms2la hna
            

        }

        cout << ans << endl;

    }
    

} 