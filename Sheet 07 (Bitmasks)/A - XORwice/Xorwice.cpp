#include <bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
 

int main()
{   

    FIO
    int t, x, y;
    cin >> t;

    while (t--)
    {
        cin >> x >> y;
        cout << (x ^ y) << endl;
    }
    

}