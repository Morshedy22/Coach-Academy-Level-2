#include <bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);
#pragma GCC optimize "trapv"
#define endl '\n'
 
int main()
{   

    FIO

    int n;
    cin >> n;   
    string str;
    stack<string> stk;
    unordered_set<string> unset;

    while (n--)
    {
        cin >> str;
        stk.push(str);
    }

    while (!stk.empty())
    {
        if(unset.count(stk.top()) == 0)
        {
            cout << stk.top() << endl;
            unset.insert(stk.top());
        }
        stk.pop();
    }
    
}