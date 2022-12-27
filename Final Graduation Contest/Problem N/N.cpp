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

    string s;
    cin >> s;

    int zeros = 0, ones = 0, flag = 0;
    for(int i=0; i<(int)s.size(); i++)
    {
        if(s[i] == '0')
        {
            ones = 0;
            zeros++;
        }
        else
        {
            zeros = 0;
            ones++;
        }

        if(ones >= 7 || zeros >= 7)
            flag = 1;

    }

    cout << (flag ? "YES": "NO");
    return 0;
}