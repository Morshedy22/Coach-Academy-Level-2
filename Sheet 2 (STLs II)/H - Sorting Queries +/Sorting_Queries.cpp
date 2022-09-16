#include <bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);
#pragma GCC optimize "trapv"
#define endl '\n'
typedef long long ll;

int main()
{   

    FIO

    int t, x, flag=0;
    cin >> t;
    queue<ll> q;
    priority_queue<ll, vector<ll>, greater<ll> > pq; // greater is sorted mn alsogher ll kbeer
    ll n;
    while(t--)
    {
        cin >> x;

        if(x == 1)
        {
            cin >> n;
            q.push(n);
        }
        else if(x == 2)
        {
            if(!pq.empty())
            {
                cout << pq.top() << endl;
                pq.pop();
            }
            else
            {
                cout << q.front() << endl;
                q.pop();
            }
        }
        else if(x == 3)
        {
            while(!q.empty())
            {
                pq.push(q.front());
                q.pop();
            }
        }

    }
}