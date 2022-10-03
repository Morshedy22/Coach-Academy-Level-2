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

    int t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        string temp, curr = "0";
        cin >> temp;
        curr += temp;
        int leftmost = 1, rightmost = n;
        for(int i=1; i<=n; i++)
        {
            if(curr[leftmost] != '1') 
                leftmost++;
            if(curr[rightmost] != '1')
                rightmost--;
        }
        cout << ( rightmost == 0 ? n : max(2*rightmost, 2*(n-leftmost+1)) ) << el;
        
    }    
        
        
    return 0;
}