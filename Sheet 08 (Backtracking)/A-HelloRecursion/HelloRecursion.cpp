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

vector<int> v(105);

int SumValues(int n)
{
    if(n == 0)
        return 0;
    
    return v[n] + SumValues(n-1); 
}

int main()
{
    FIO

    int t;
    cin >> t;

    for(int x=1; x<=t; x++)
    {
        int n; 
        cin >> n;
        v.clear();

        for(int i=1; i<=n; i++)
            cin >> v[i];        
        
        cout << "Case " << x << ": " << SumValues(n) << endl;
    }

    return 0;
}