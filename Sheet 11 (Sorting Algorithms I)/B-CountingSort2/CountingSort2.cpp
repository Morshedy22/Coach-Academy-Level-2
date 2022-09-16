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

    int n;
    cin >> n;
    vi arr(n), count(100);

    for(auto& i : arr) cin >> i;

    for(int i=0; i<n; i++)
    {
        count[arr[i]]++;
    }

    int num = 0;
    for(auto i : count)
    {
        while (i--)
        {
            cout << num << " ";
        }
        num++;
    }
    

    return 0;
}