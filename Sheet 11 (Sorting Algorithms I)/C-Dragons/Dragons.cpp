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


int main()
{
    FIO

    int s, n;
    cin >> s >> n;
    vector< pair<int, int> > arr(n);

    for(auto& [x,y] : arr) cin >> x >> y;

    sort(all(arr));

    int flag = 1;
    for(auto [x,y] : arr)
    {
        if(s > x)
            s+=y;
        else
            flag = 0;
    }
    
    cout << (flag ? "YES" : "NO");

    return 0;
}