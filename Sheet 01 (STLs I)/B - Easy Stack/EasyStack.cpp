#include <bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

int main()
{
    FIO
    stack<long long> st;

    long long t, n, x;
    cin >> t;

    while( t-- )
    {
        cin >> n;
        
        if(n==1)
        {
            cin >> x;
            st.push(x);
        }
        else if(n==2 && !st.empty()) // b3ml pop lma tkoun al stack fe haga f lazm a3ml check alhwa msh fady
        {
            st.pop();
        }
        else if(n==3)
        {
            if(!st.empty())
                cout << st.top() << endl;
            else
                cout << "Empty!" << endl;
        }
    }
}