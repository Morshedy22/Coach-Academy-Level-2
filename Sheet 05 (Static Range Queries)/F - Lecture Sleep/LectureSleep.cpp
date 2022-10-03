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


int main()
{
    FIO

    int n, k;
    cin >> n >> k;

    vi a(n), t(n), pref(n);
    for(auto& i : a) cin >> i;
    for(auto& i : t) cin >> i;

    int solution = 0;
    for(int i=0; i<n; i++)
    {
        if(t[i] == 1)
        {
            solution += a[i];
            a[i] = 0;
        }
    }
    pref[0] = a[0];
    for(int i=1; i<n; i++)
        pref[i] = a[i] + pref[i-1];
    
    int mx = 0, l=0, r=k-1; // r = k-1 bec we work 0_based
    for(int i=0; i<= n-k; i++)
    {
        l = i;
        r = i + k - 1;
        if(l == 0)
            mx = max(mx, pref[r]);
        else
            mx = max(mx, pref[r]-pref[l-1]);
        
    }

    cout << solution + mx;
    return 0;
}