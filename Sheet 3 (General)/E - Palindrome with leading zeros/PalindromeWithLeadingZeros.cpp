#include <bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);
#pragma GCC optimize "trapv"
#define endl '\n'

bool isplaindrome(string s)
{
    int sz = (int)s.size();
    for(int i=0; i<s.size(); i++)
    {
        if(s[i] != s[sz-i-1])
            return false;
    }
    return true;
}

int main()
{
    FIO
    string s;
    // string cmp = "";
    cin >> s;

    if(isplaindrome(s))
    {
        cout << "Yes";
        return 0;
    }
    for(int i=0; i<10; i++)
    {
        s = '0' + s;
        if(isplaindrome(s))
        {
            cout << "Yes";
            return 0;
        }
    }

    cout << "No";
}