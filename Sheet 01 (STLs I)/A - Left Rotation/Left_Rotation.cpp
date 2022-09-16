#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, d,x;
    cin >> n >> d;
    deque<int> dq(n);

    for(int i=0; i<n; i++)
    {
        cin>>dq[i];
    }

    for(int i=0; i<d; i++)
    {
        x = dq.front();
        dq.pop_front();
        dq.push_back(x);
    }

    for(auto d : dq)
        cout << d << " ";
}