#include <bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);
#pragma GCC optimize "trapv"
#define endl '\n'
 
// "https://www.geeksforgeeks.org/inline-functions-cpp/" // shoof hya eh al inline char

inline bool IsLowerCharacter(char c)  // inline funciton a3ml search wafhm hya eh
{
    return c >= 'a' && c <= 'z';
}

int main()
{   

    FIO

    string s;
    set<string> st;

    while( cin >> s)
    {
        int sz = (int)s.size();
        string str = "";

        for(int i=0; i<sz; i++)
        {
            int c = tolower(s[i]);

            if(IsLowerCharacter(c))
                str += c;

            else if( str != "")
            {
                st.insert(str);
                str = "";
            }
        }
        
        if( str != "")
        {
            st.insert(str);
            str = "";
        }


    }
    for(auto it : st)
        cout << it << endl;
}