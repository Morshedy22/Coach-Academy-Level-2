#include <bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);
#pragma GCC optimize "trapv"
#define endl '\n'
typedef long long ll;

int main()
{
    FIO

    int t;
    cin >> t;

    while(t--)
    {
        int n, k, i=0;
        cin >> n >> k;
        int arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];

 
        for(int i=0; i<n-1; i++)
        {
            if(arr[i] >= k)
            {
                arr[i]-=k;
                arr[n-1]+=k;
                k=0;
            }
            else
            {
                arr[n-1] += arr[i];
                k-=arr[i];
                arr[i]=0;
            }
        }

        for(int i=0; i<n; i++)
            cout << arr[i] << " ";
        cout<<"\n";
    }
}