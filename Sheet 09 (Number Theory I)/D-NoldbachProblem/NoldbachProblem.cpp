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
int N = 1e3+3;
vi isprime(N,1);
vi primes, noldbach;

void seive()
{
    isprime[0] = isprime[1] = 0;
    for(int i=2; i<=N; i++)
    {
        if(isprime[i])
        {
            primes.pb(i);
            for(int j=i*2; j<=N; j+=i)
                isprime[j] = 0;
        }
    }
}

int main()
{
    FIO

    int n, k;
    cin >> n >> k;
    seive();

    for(int i=1; i<(int)primes.size(); i++)
    {
        if(isprime[ (primes[i] + primes[i-1] + 1) ])   
            noldbach.pb(primes[i] + primes[i-1] + 1);
    }

    int indx = upper_bound(all(noldbach), n) - noldbach.begin();


    cout << (k <= indx ? "YES" : "NO");

    return 0;
}