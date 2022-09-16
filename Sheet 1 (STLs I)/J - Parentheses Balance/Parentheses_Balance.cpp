#include <bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
 

int main()
{   

    FIO

    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        string s;
        getline(cin, s);

        stack<char> st;
        for(int i=0; i<s.size(); i++)
        {
            if(!st.empty())
            {
                if( (st.top() == '(' && s[i] == ')') || (st.top() == '[' && s[i] == ']'))
                    st.pop();
                else
                    st.push(s[i]);

            }
            else
            {
                st.push(s[i]);
            }
        }
        cout << (st.empty() ? "Yes" : "No") << endl;
        
    }   
}