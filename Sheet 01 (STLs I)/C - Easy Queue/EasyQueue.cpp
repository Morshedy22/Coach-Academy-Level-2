#include <bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'


int main()
{
    FIO
    queue<long long> q;

    long long t, n, x;
    cin >> t;

    while( t-- )
    {
        cin >> n;
        
        if(n==1)
        {
            cin >> x;
            q.push(x);
        }
        else if(n==2 && !q.empty()) // b3ml pop lma tkoun al stack fe haga f lazm a3ml check alhwa msh fady
        {
            q.pop();
        }
        else if(n==3)
        {
            if(!q.empty())
                cout << q.front() << endl;
            else
                cout << "Empty!" << endl;
        }
    }
}