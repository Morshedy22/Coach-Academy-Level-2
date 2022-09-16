#include <bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

int main()
{
    FIO

    queue< pair<int,int> > q;
    int n, m, x;
    cin >> n >> m;

    for(int i=1; i<=n; i++)
    {
        cin >> x;
        q.push({x,i});
    }
    
    while (q.size()!=1)
    {
        pair<int,int> curr = q.front();
        if(curr.first - m <=0)
            q.pop();
        else
        {
            curr.first -= m;
            q.pop();
            q.push(curr);
        }
    }

    cout << q.front().second;
    




}