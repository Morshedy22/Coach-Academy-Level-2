#include <bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(false);cin.tie(nullptr);
#define endl '\n'
typedef long long ll;

int main()
{
    FIO
    int n;
    cin >> n;
    ll arr1[n+1]={}, arr2[n+1]={};

    for(int i=1; i<=n; i++)
    {
        cin >> arr1[i];
        arr2[i] = arr1[i];
    }

    sort(arr2, arr2+(n+1));

    for(int i=1; i<=n; i++)
    {
        arr1[i] += arr1[i-1];
        arr2[i] += arr2[i-1];
    }
  
    int q, type, l, r;
    cin >> q;

    while(q--)
    {
        cin >> type >> l >> r;
        if(type == 1)
            cout << arr1[r] - arr1[l-1] << endl;
        else
            cout << arr2[r] - arr2[l-1] << endl;
    }
}