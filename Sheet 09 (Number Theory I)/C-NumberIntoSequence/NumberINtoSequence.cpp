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

 pair<ll , ll> mxPrimeFact(ll n)
{
    pair<ll , ll> mxFact={0,0};
    for(ll i=2; i*i<=n; i++)
    {
        int cnt = 0;
        while(n%i == 0)
        {
            n/=i;
            cnt++;
        }
        if(cnt>mxFact.S) mxFact = {i,cnt}; 
    }
    if(n > 1 && 1 > mxFact.S) mxFact = {n, 1};
    return mxFact;
}
 

int main()
{
    FIO
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        pair<ll, ll> mxcount = mxPrimeFact(n);
        ll div = 1;

        cout << mxcount.S << endl;
        for(int i=0; i<mxcount.S-1; i++)
        {
            cout << mxcount.F << " ";
            div *= mxcount.F;
        }

        cout << (div!=1 ? n/div : n) << endl;

        
    }

    
    

    


    return 0;
} 