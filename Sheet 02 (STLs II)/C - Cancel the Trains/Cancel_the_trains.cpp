#include <bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
 

int main()
{   

    FIO
    
    int t;
    cin >> t;
    int n, m, x;
    map < int , int > mp;
    while(t--)
    {
        mp.clear();
        int  count = 0;
        cin >> n >> m;
        while(n--)
        {
            cin >> x;
            mp[x]++;
        }
        while (m--)
        {
            cin >> x;
            mp[x]--;
        }

        for(auto m : mp)
            if(m.second == 0)
                count++;

        cout << count << endl;
        
    }
}