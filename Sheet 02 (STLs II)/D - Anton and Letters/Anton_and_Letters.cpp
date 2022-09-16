#include <bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);
#pragma GCC optimize "trapv"
#define endl '\n'
 

int main()
{   

    FIO

    string s;
    getline(cin, s);

    unordered_set<char> st;

    for(int i=0; i<(int)s.size(); i++)
    {
        if(isalpha(s[i]))
            st.insert(s[i]);
    }

    cout << st.size();

}