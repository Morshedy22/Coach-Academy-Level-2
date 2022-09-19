#include <bits/stdc++.h>

using namespace std;

#define FIO ios_base::sync_with_stdio(0);cin.tie(0);
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
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        
        int c1 = 0, c2 = 0;

        c1 = n/3;
        c2 = (n-c1)/2;
        int rem = 0;

        if(c1+c2 ==0)
            rem = n;
        else
            rem = n%(c1+2*c2);
    
        if(rem == 1)  cout << ++c1 << " " << c2 << el;
        else if(rem == 2)  cout << c1 << " " << ++c2 << el;
        else    cout << c1 << " " << c2 << el;
    }


    return 0;
}   