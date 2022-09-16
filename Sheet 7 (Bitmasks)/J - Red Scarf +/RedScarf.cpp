#include <bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
typedef long long ll;

int main()
{
    FIO
    
    int n, y=0;
    cin >> n;

    vector<int> v(n);
    for(auto& x : v) cin >> x;

    for(auto x : v) y^=x;

    for(auto x : v) cout << (y^x) << " ";

    

}