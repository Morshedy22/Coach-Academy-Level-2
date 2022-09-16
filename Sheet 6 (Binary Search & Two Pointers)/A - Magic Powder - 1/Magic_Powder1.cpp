#include <bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);
#pragma GCC optimize "trapv"
#define endl '\n'
typedef long long ll;



ll n, k;

bool isMakeCake(int NumOfCockies, vector<ll>& a, vector<ll>& b)
{
    ll temp_k = k;
    for(int i=0; i<n; i++)
    {
        if(NumOfCockies*a[i] <= b[i])
            continue;
        else if(NumOfCockies*a[i]-b[i] <= temp_k)
            temp_k -= NumOfCockies*a[i]-b[i];
        else
            return false;

    }
    return true;
}


int main()
{
    FIO

    cin >> n >> k;
    vector<ll> a(n), b(n);

    for(auto& x : a)
        cin >> x;
    for(auto& x : b)
        cin >> x;

    int low = 0, high = 2e9, ans=0;

    while(low <= high)
    {
        int mid = low + (high-low)/2;

        if(isMakeCake(mid, a, b))
        {
            ans = mid;
            low = mid+1;
        }
        else
            high = mid - 1;
    }

    cout << ans ;

}


