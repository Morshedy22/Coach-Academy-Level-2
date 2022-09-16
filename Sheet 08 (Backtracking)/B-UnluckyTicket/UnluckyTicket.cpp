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

/*
---> وتظل تسعى جاهدا في همةٍ   ..  والله يعطي من يشاءُ إذا شكر <---
*/


vector<int> v(103);

bool check(int n)
{
    int flag = v[0];
    for(int i=1; i<n; i++)
    {
        if(v[i] != flag)
            return 0;
    }
    return 1;
    
}

int main()
{
    FIO

    int n;
    cin >> n;

    string str;
    cin >> str;

    vector<int> f(n), s(n);

    for(int i=0; i<n; i++)
        f[i] = str[i]-'0';
    
    int j = (n*2)/2;
    for(int i=0; i<n; i++)
    {
        
        s[i] = str[j]-'0';
        j++;
    }

    sort(all(f));
    sort(all(s));

    for(int i=0; i<n; i++)
    {

        if(f[i] == s[i])
        {
            cout << "NO";
            return 0;
        }
        else 
        {
            v[i] = (f[i] > s[i]);
        }
    }

    cout << (check(n) ? "YES" : "NO");

    
    return 0;
}