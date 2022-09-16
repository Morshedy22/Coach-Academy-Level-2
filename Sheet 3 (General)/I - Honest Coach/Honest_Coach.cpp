#include <bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);
#pragma GCC optimize "trapv"
#define endl '\n'

int main()
{
    FIO

    int t; 
    cin >> t;

    while(t--)
    {

        int n;   cin >> n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }

        int mn = INT_MAX;
        sort(arr, arr+n);

        for(int i=0; i<n-1; i++)
        {
            int ans = arr[i+1] - arr[i];
            mn = min(mn, ans);
        }

        cout << mn << endl;

    }
}