#include <bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);
#pragma GCC optimize "trapv"
#define endl '\n'
typedef long long ll;





int main()
{
    FIO

    int n,x;
    cin >> n;

    int pref[n+1]= {};

    for(int i=1; i<=n; i++)
    {
        cin >> x;
        pref[i] = x + pref[i-1];
    }

    int q;
    cin >> q;

    while(q--)
    {
        int l, r;
        cin >> l >> r;

        cout << pref[r+1] - pref[l] << endl;
    }
}