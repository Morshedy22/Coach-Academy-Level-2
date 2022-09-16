#include <bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);
#pragma GCC optimize "trapv"
#define endl '\n'

int main()
{
    FIO
    string s;
    cin >> s;
    multiset<char> ms;

    for(int i=0; i<(int)s.size(); i++)
    {
        if(s[i] != '+')
            ms.insert(s[i]);
    }

    for(auto it = ms.begin(); it != --ms.end(); it++)
    {
        cout << *it << "+";
    }

    cout << *(--ms.end());
}