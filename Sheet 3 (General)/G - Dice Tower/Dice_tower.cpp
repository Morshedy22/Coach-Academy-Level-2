#include <bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);
#pragma GCC optimize "trapv"
#define endl '\n'

int main()
{
    FIO
    
    int t, x, n, m, flag = 1;
    cin >> t;
    cin >> x;

    while(t--)
    {
        cin >> n >> m;

        if(n == x || n == 7-x || m == x || m == 7-x)
        {
            flag = 0;
        }
    }
    cout << (flag ? "YES" : "NO");
}