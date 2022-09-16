#include <bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

int main()
{   

    FIO
    int n, x, y;
    cin >> n;
    
    vector<int> v;
    
    for(int i=0; i<n; i++)
    {
        if(i==0)
        {
            cin>> x;
            y = x;
            continue;
        }
        
       cin >> x;
       if(x<=y)
       {
            v.push_back(y);
       }
       y = x;
    }
    v.push_back(x);

    cout << v.size() << endl;
    for(auto it : v)
        cout << it << " ";
}