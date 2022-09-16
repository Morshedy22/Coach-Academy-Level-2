#include <bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
typedef long long ll;


int n, k;

bool ok(int mx_median, vector<int> v)
{
    int diff = 0, temp_k = k;
    for(int i = n/2; i<n; i++)
    {
        diff = max(mx_median - v[i], 0);
        temp_k-= diff; // overflow
        if(temp_k < 0)
            return 0;
    }
    return k>= 0;
    
}


int main()
{
    FIO
    
    cin >> n >> k;

    vector<int> v(n);
    for(auto& i : v) cin >> i;

    sort(v.begin(), v.end());

    int low = 1, high = 2e9, ans=0;

    while(low <= high )
    {
        int mid = low + (high-low)/2;

        if(ok(mid, v))
        {
            ans = mid;
            low = mid + 1;
        }
        else
            high = mid - 1;
    }

    cout << ans;
}