#include <bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);
#pragma GCC optimize "trapv"
#define endl '\n'
typedef long long ll;

int main()
{
    FIO

    int n, count =0; 
    cin >> n;

    vector<int> v(n);

    for(auto &x : v)
        cin >> x;

    sort(v.begin(), v.end());
    int p1 =0, p2 = n/2;

    while(p2 < n && p1 < n/2)
    {
        if(v[p1]*2 <= v[p2])
        {
            count++;
            p1++; p2++;
        }
        else
        {
            p2++;
        }
    }
    cout << n - count;
}