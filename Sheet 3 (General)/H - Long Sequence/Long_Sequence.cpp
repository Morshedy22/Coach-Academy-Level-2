#include <bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);
#pragma GCC optimize "trapv"
#define endl '\n'

int main()
{
    FIO
    int n;
    cin >> n;

    int arr[n] = {};
    long long x, sum = 0, count = 0;

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    cin >> x;

    long long rep = x / sum;  

    sum *= rep; 
    count = rep * n;
    
    for(int i=0; sum <= x; i++)
    {
        sum+=arr[i];
        count++;
    }
    
    cout << count; 
}