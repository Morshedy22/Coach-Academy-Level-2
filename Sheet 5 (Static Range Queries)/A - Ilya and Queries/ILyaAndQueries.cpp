#include <bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);
#pragma GCC optimize "trapv"
#define endl '\n'
typedef long long ll;





int main()
{
    FIO
    string s;
    cin >> s;
    int n = (int)s.size();
    
    int q;
    cin >> q;
    
    int pref[n] = {};
    for(int i=1; i<n; i++)
    {
        if(s[i] == s[i-1])
            pref[i] = pref[i-1] + 1;
        else
            pref[i] = pref[i-1] + 0;
    }

    while(q--)
    {
        int l, r;
        cin >> l >> r;

        cout << pref[r-1] - pref[l-1] << endl;
    }
}