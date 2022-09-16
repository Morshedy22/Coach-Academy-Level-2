#include <bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);
#pragma GCC optimize "trapv"
#define endl '\n'
typedef long long ll;


int main()
{
    ll n, x, count = 0;
    cin >> n;

    priority_queue<ll, vector<ll>, greater<ll> > pq;
    ll sum = 0;
    for(int i=0; i<n; i++)
    {
        cin >> x;
        if(x >= 0)
        {
            sum += x;
            count++;
        }
        else
        {
            if( sum+x >= 0 )
            {
                sum += x;
                pq.push(x);
                count++;
            }
            else if(!pq.empty()) // lazm at2kd an al piority queue msh fady
            {
                int less = pq.top(); // 3shan lw dkhlt whwa fady mshy hy3rf ygeeb al top "RTE"

                if(x > less)
                {
                    sum -= less;
                    sum += x;
                    pq.pop();
                    pq.push(x);
                }
                
            }

        }
    }    

    cout << count;
}