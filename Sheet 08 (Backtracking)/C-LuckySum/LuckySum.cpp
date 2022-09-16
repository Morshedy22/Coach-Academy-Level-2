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

set<ll> st;
void generateLucky(ll n, int l , int r)
{
    st.insert(n);
    if(n>r)
        return;
    
    generateLucky(n*10+4, l, r);
    generateLucky(n*10+7, l, r);
    
}

int main()
{
    FIO

    ll l ,r;
    cin >> l >> r;

    generateLucky(0, l, r);
    ll sum = 0;

    for(ll i=l; i<=r;)
    {
        ll x = *st.lower_bound(i); 
        if(x<r)
        {
            sum += (x*(x-i+1));
            i = x+1;
        }
        else if (i == r) // 747 748 3shan btboz f al test da :)
        {
            sum += x;
            i = x + 1;
        }
        else
        {
            sum += (x*(r-i+1));
            i = x+1;
        }
            
    
    }

    cout << sum;
    
    return 0;
}