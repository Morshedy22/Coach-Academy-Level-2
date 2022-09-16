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

int N = 3e3+5;
vi prime(N), almost_prime(N);

void primeNumbers()
{
    for(int i=2; i<N; i++)
    {
        if(!prime[i])
        {
            for(int j=i+i; j<N; j+=i)
            {
                prime[j]+=1;
            }
        }
    }
}
void AlmostPrime()
{
    for(int i=2; i<N; i++)
    {
        if(prime[i] == 2)
            almost_prime[i] = 1;
    }
}

int main()
{
    FIO
    primeNumbers();
    AlmostPrime();
    
    int n;
    cin >> n;

    int cnt = 0;
    for(int i=0; i<=n; i++)
    {
        if(almost_prime[i])
            cnt++;
    }

    cout << cnt;
    return 0;
}