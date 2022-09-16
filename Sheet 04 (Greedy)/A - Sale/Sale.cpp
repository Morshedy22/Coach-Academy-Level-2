#include <bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);
#pragma GCC optimize "trapv"
#define endl '\n'
typedef long long ll;

int main()
{
    FIO

    int n, m, x, sum=0;
    cin >> n >> m;
    multiset<int> ms;

    for(int i=0; i<n; i++)                                                                       
    {
        cin >> x;
        ms.insert(x);
    }

    for(auto it: ms)
    {
        if(m==0 || it >= 0)
            break;
        
        sum -= it; 
        m--;
    }

    cout << sum;
}