#include <bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);
#pragma GCC optimize "trapv"
#define endl '\n'

int main()
{
    FIO

    int t;
    cin >> t;

    while (t--)
    {
        int n, prev = -1, x, ans = 0;
        cin >> n;

        for(int i= 0; i<n; i++)
        {
            cin >> x;

            if(prev == -1)
            {
                prev = x;
                continue;
            }
            int a = min(prev, x);
            int b = max(prev, x);

            while( 2 * a < b)
            {
                a *= 2;
                ans++;
            }
            
            // momken bdl while loop a3mlha b log
            // if( 2*a < b)
            //     ans += ceil(log2((b+a-1)/a))-1;
            
            prev = x;

        }
        cout << ans << endl;
    }   
}