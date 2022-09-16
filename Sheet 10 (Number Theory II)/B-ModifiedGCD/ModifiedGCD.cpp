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



set<int> divisors(int n)
{
    set<int> div;
    for(int i=1; i*i<=n; i++)
    {
        if(n%i == 0)
            div.insert(i), div.insert(n/i);   
    }
    return div;
}

int main()
{
    FIO

    int a, b; cin >> a >> b;
    set<int> div = divisors(__gcd(a,b));
    
    
    
    int t; cin >> t;

    while (t--)
    {
        int low , high;
        cin >> low >> high;
        auto it = upper_bound(all(div), high);
        it--;
        
        cout << (*it>=low ? *it : -1) << endl;

    }
    return 0;
}