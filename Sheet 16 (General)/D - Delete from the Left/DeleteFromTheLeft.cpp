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

    string s1, s2;
    cin >> s1 >> s2;

    int p1 = s1.size()-1, p2 = s2.size()-1;
    int have = 0;
    while(s1[p1] == s2[p2])
    {
        have += 2, p1--, p2--;
        if(p1 < 0 || p2 < 0)
            break;   
    }

    cout << ((int)s1.size() + (int)s2.size()) - have;
    return 0;
}