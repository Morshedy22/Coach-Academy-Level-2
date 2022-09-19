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

    int n;
    cin >> n;

    vi arr(n);

    for(auto& i : arr) cin >> i;

    sort(all(arr));
    int mx = 0;
    int ans = 0, p1 = 0, p2=0;
    while(p2 != n)
    {
        if(arr[p2] - arr[p1] > 5)
            p1++, ans--;
        else
            p2++, ans++;

        mx = max(mx, ans);

    }

    cout << mx;
    return 0;
}