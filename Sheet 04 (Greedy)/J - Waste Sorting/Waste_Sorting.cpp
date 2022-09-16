#include <bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);
#pragma GCC optimize "trapv"
#define endl '\n'
typedef long long ll;

int main()
{
    FIO
    int t;
    cin >> t;

    while(t--)
    {
        int c[4], a[6], flag = 1;

        for(int i=1; i<=3; i++)
            cin >> c[i];
        for(int i=1; i<=5; i++)
            cin >> a[i];

        for(int i=1; i<=3; i++)
        {
            if(c[i] < a[i])
                flag = 0;
            else
                c[i] -= a[i];
        }

        for(int i=1; i<=2; i++)
        {
            a[i+3] -= c[i];
            if(a[i+3] > 0)
            {
                c[3] -= a[i+3];
                if(c[3] < 0)
                    flag = 0;
            }
        }

        cout << (flag ? "YES" : "NO") << endl;

    }
}