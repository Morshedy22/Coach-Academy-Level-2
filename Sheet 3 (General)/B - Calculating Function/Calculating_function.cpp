#include <bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);
#pragma GCC optimize "trapv"
#define endl '\n'

int main()
{
    FIO

    long long n;
    cin >> n;

    if(n % 2 == 0)
        cout << n/2;
    else
        cout << (-(n+1)/2);
}