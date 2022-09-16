#include <bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);
#pragma GCC optimize "trapv"
#define endl '\n'
typedef long long ll;

int main()
{
    FIO
    int n, m, mn = INT_MAX;

    cin >> n >> m;
    int arr[m];
    
    for(int i=0; i<m; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr+m);
    
    n--;
    for(int i=0; i<m-n; i++)
    {
        mn = min(mn, arr[i+n]-arr[i]);
    }

    cout << mn;
}