#include <bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
 

int main()
{   

    FIO

    int n;
    cin >> n;

    map< string, int> mp;
    string s;

    while(n--)
    {
        cin >> s;
        
        if(mp[s] == 0)
        {
            cout << "OK" << endl;
            mp[s]++;
        }
        else
        {
            cout << s << mp[s] << endl;
            mp[s]++;
        }
    }
}