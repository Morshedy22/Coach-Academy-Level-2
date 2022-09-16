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

int N=1e9+5;
vi prime(N,1);
map<int, bool> mp;

void sieve()
{
    prime[0] = prime[1] = 0;
    for(int i=2; i*i<=N; i++)
    {
        if(prime[i])
        {
            mp[i] = 1;
            for(int j=i*i; j<=N; i++)
                prime[j] = 0;
        }
    }
}

int main()
{
    FIO
    sieve();
    for(auto [x,y] : mp)
        cout << x << " ";
    return 0;
}