#include <bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
 

int main()
{   

    FIO
    int t;
    cin >> t;
    while(t--)
    {
        int n, bitindex=0; 
        cin >> n;

        for(int i=0; i<=31; i++)
        {
            if( (n>>i)&1)
            {
                bitindex = i;
                break;
            }
        }

        int A = (n & (1<<bitindex));
        int B = (n & ~(1<<bitindex));

        if(A + B == n && B != 0)
            cout << A << " " << B << endl;
        else
            cout << -1 << endl;
    }
}