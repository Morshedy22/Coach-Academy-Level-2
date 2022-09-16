#include <bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
typedef long long ll;

int main()
{
    FIO

    int n, ans = 0;
    cin>> n;
    
    vector<int> v(n);
    for(auto& x : v) cin >> x;

    for(int mask = 0; mask <(1<<n); mask++)
    {
        int prev = 0, cnt = 1;
        for(int i=0; i<n; i++)
        {
            if((mask>>i)&1)
            {
                if (prev == 0)
                    prev = v[i];
                
                if(prev < v[i])
                {
                    prev = v[i];
                    cnt++;
                }    
            }
        }
        ans = max(ans, cnt);
    }

    cout << ans;


    
}