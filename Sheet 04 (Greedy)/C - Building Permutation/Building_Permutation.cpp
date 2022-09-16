#include <bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);
#pragma GCC optimize "trapv"
#define endl '\n'
typedef long long ll;

int main()
{
    FIO

    int n, x=1; 
    cin >> n; 
    vector<int> v(n);
    ll sum = 0;

    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    for(int i=0; i<n; i++)
    {
        sum += abs(v[i]-x);
        x++;
    }

    cout << sum ;
}