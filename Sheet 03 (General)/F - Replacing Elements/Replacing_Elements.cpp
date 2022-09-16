#include <bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);
#pragma GCC optimize "trapv"
#define endl '\n'

int main()
{
    FIO

    int t, n, d;
    cin >> t;

    while(t--)
    {        
        cin >> n >> d;
        vector<int> v(n);  
    
        for(auto& x : v)
            cin >> x;
        
        sort(v.begin(), v.end());
        
        auto it = --v.end();

        if(*it > d && v[0] + v[1] > d )
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}