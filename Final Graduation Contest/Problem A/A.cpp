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

    int t, n, d;
    cin >> t;
    while(t--)
    {
        cin >> n >> d;
        vi arr(n);

        for(auto& i : arr) cin >> i;

        sort(all(arr));

        if(*upper_bound(all(arr), d) == *arr.end())
            cout << "Yes" << el;
        else
            if(arr[0] + arr[1] <= d)
                cout << "Yes" << el;
            else
                cout << "No" << el;
        
    }

    return 0;
}