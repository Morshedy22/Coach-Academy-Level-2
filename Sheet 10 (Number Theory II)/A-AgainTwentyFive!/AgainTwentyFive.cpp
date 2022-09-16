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

ll FpowM(int a, ll b, int m)
{
    if(b == 1)
        return a;
    
    int res = FpowM(a, b>>1LL, m);

    return ((a&1 ? a : 1) * (res * res)%m)%m;
}

int main()
{
    FIO
    ll n;
    cin >> n;

    cout << FpowM(5,n,100);

    return 0;
}