#include <bits/stdc++.h>

using namespace std;

#define Morshedy_22 ios_base::sync_with_stdio(false);cin.tie(nullptr);
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
typedef vector<vi> vvi;
typedef vector<pii> vii;

const int inf = 0x3f3f3f3f;
const ll infLL = 0x3f3f3f3f3f3f3f3fLL;
const int N = 1e5+5;
const int mod = 1e9+7;
const int d4x[4]={-1, 0, 1, 0}, d4y[4]={0, 1, 0, -1};
const int d8x[8]={-1, -1, 0, 1, 1, 1, 0, -1}, d8y[8]={0, 1, 1, 1, 0, -1, -1, -1};

/*
---> وتظل تسعى جاهدا في همةٍ   ..  والله يعطي من يشاءُ إذا شكر <---
*/
int n, r;

vector<string> words(105), rules(1005);

void solve(int idx, string rule, string ans)
{

    if(idx >= (int)rule.size())
    {
        cout << ans << el;
        return;
    }
    else
    {
        if(rule[idx] == '#')
        {
            for(int i=0; i<n; i++)
            { 
                solve(idx+1, rule, ans+words[i]); 
            }
        }
        else if(rule[idx] == '0')
        {
            for(int i='0'; i<='9'; i++)
            {
                ans.pb(i);
                solve(idx+1, rule, ans);
                ans.pop_back();
            }
        }
    }
}

void testCase()
{
    words.clear(), rules.clear();
    cout << "--" << el;
    for(int i=0; i<n; i++)
        cin >> words[i];

    cin >> r;
    for(int i=0; i<r; i++)
        cin >> rules[i];

    for(int i=0; i<r; i++)
        solve(0, rules[i], "");
    
}


int main()
{
    Morshedy_22

    // freopen("output.txt","w",stdout);

    int tc = 1;
    // cin >> tc;
    
    while(cin >> n)
        testCase();


    return 0;
}