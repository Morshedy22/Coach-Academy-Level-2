#include <bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);
#pragma GCC optimize "trapv"
#define endl '\n'
typedef long long ll;

int main()
{
    FIO
    int n, x, sum =0; 
    cin >> n;

    while(n--)
    {
        cin >> x;

        if(x>=0)
            sum+=x;
        else
            sum-=x;
    }
    cout << sum;
}