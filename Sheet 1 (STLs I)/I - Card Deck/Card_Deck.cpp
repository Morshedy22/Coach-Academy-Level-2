#include <bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

int main()
{   

    FIO
    
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, end;
        cin >> n;
        map<int, int> mp;
        vector <int> v(n);

        for(int i=0; i<n; i++)
        {
            cin>>x;
            v[i] = x;
            mp[x] = i;
        }
        
        end = n;
        
        for(int i=n; i>0; i--)
        {
            if(mp[i] >= end)
                continue;
            
            for(int j=mp[i]; j<end; j++)
                cout << v[j] << " ";
            
            end = mp[i];
        }
        cout << "\n";

    }
    

}