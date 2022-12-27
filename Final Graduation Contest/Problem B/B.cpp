#include <bits/stdc++.h>

using namespace std;

#define FIO ios_base::sync_with_stdio(false);cin.tie(nullptr);
#define F first
#define S second
#define pb push_back
#define all(v) v.begin(),v.end()
#define FILL(a, b) memset(a, b, sizeof(a))
#define el '\n'

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<pii, int> piii;
typedef vector<int> vi;
typedef vector<pii> vii;

const int INF = 0x3f3f3f3f;
const ll INFL = 0x3f3f3f3f3f3f3f3fLL;

/*
---> وتظل تسعى جاهدا في همةٍ   ..  والله يعطي من يشاءُ إذا شكر <---
*/


ll sieve(ll n, ll d)
{
    vector<bool> prime(n+1, 1);
    vector<ll> primes;
    for(int i=2; i<=n; i++)
    {
        if(prime[i])
        {
            if((i-1) >= d && (int)primes.size() == 0)
            {
                primes.pb(i);
            }
            if((int)primes.size() == 1)
            {
                if(i- primes[0] >= d)
                {
                    primes.pb(i);
                    break;
                }
            }
            for(ll j=i+i; j<=n; j+=i)
                prime[j] = 0;
        }
    }
    return min(primes[0] * primes[1], primes[0] * primes[0] * primes[0]);
}

int main()
{
    FIO

    int t;
    cin >> t;
    
    while(t--)
    {
        ll d;
        cin >> d;
        cout << sieve(20011, d) << endl;
    }

    return 0;
}