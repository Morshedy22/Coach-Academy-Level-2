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

    while (t--)
    {
        int n; 
        cin >> n;


        string b , a="", d="";
        cin >> b;

        a += '1';
        d = b[0] + a[0];

        for(int i=1; i<n; i++)
        {
            if(b[i] + '1' != d[i-1])
            {    
                a += '1';
                d += a[i] + b[i];
            }
            else
            {
                a += '0';
                d += a[i] + b[i];
            }
        }

        cout << a << endl;

    

    }
}