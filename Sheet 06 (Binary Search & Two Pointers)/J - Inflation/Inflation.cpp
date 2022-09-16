#include <bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
typedef long long ll;

int n, k;   

bool ok(ll x, vector<ll> price, vector<ll> pref_price)
{
    for(int i=1; i<n; i++)
    {
        double inflation = (double)price[i]/((ll)pref_price[i-1]+x);

        if(inflation > (double)k/100.0)
            return 0;
    
    }
    return 1;
}

int main()
{
    FIO
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        vector<ll> price(n), pref_price(n);

        for(auto& i : price) cin >> i;

        pref_price[0] = price[0];
        for(int i=1; i<n; i++) 
            pref_price[i] = price[i] + pref_price[i-1];

        ll low = 0, high = 1e11, ans = 0;

        while(low<=high)
        {
            ll mid = low + (high-low)/2;

            if(ok(mid, price, pref_price))
            {
                ans = mid;
                high = mid - 1;
            }
            else
                low = mid + 1;
        }
        cout << ans << endl;
    }
    
}