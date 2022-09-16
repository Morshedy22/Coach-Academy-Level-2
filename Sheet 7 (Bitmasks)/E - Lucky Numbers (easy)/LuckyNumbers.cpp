#include <bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
typedef long long ll;

/* How to know how many digit in number
    The formula will be integer of (log10(number) + 1).
    For an example, if the number is 1245, then it is above 1000, and below 10000,
    so the log value will be in range 3 < log10(1245) < 4. Now taking the integer,
    it will be 3. Then add 1 with it to get number of digits.
 */

int main()
{   

    FIO
    int nubmer, n;
    ll ans = (1LL<<62);
    cin >> nubmer;

    int digit = (int)log10(nubmer) + 1;

    if(digit&1) // if odd
        n = digit+1;
    else 
        n = digit;
        
    for(int mask =0; mask < ((ll)1<<(n)); mask++)
    {
        ll luckynumber=0;
        int cnt = 0;
        for(int i=0; i<n; i++)
        {
            // assume 1 mean 4 and 0 mean 7
            if((mask>>i)&1)
            {
                luckynumber = luckynumber * 10 + 4;
                cnt += 1;
            }
            else
            {
                luckynumber = luckynumber * 10 + 7;
                cnt -= 1;
            }

        }
        
        if(cnt == 0 && luckynumber >= nubmer)
        {

            ans = min(ans, luckynumber);
        }
        if(mask == (1<<n)-1 && ans == 1LL<<62)
        {
            n = digit + 2;
            mask = 0;
        }
    }

    cout << ans;
    
}
