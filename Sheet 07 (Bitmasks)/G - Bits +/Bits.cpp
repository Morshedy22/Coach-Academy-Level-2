#include <bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
typedef long long ll;



int main()
{   

    FIO
    int t;
    ll l , r; 
    cin >> t;

    while(t--)
    {
        cin >> l >> r;
        ll ans=l;
        for(int i=0; ;i++)
        {
            l |= (1LL<<i);
            if(l <= r)
                ans = l;
            else
                break;
        }
        cout << ans << endl;
    }

}