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

int N = 1e6+5;


vi prime(N,1);
map<ll , bool> t_prime;

void T_prime()
{
    prime[0] = prime[1] = 0;
    for(ll i=2; i<N; i++)
    {
        if(prime[i])
        {
            t_prime[i*i] = 1;
            for(ll j=i*i; j<=N; j+=i)
            {
                prime[j] = 0;
            }
        }
    }
}

int main()
{
    FIO
    
    T_prime();
    
    int t;
    cin >> t;
    while(t--)
    {
        ll x;
        cin >> x;
        
        cout << (t_prime[x] ? "YES" : "NO") << endl;
    }

    return 0;
}