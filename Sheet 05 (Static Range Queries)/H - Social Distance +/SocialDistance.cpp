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

    int t, n, k, len, left, right, res = 0;
    string s;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        cin >> s;
        res = 0;
        for(int i=0; i<n;)
        {
            int j = i+1;
            for(; j<n && s[j] == '0'; j++);

            len = j - i;
            left = (s[i] == '1' ? k : 0);
            right = (j < n && s[j] == '1' ? k : 0);

            if(left == k)
                len--;

            len -= (left + right);
            if(len > 0)
                res += (len + k) / (k+1);

            i = j;
        }

        cout << res << el;
    }
    
    return 0;
}