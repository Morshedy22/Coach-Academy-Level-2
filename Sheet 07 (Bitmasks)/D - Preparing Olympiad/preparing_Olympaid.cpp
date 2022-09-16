#include <bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

int main()
{   

    FIO
    int n, l, r, x, ans = 0;

    cin >> n >> l >> r >> x;
    
    int arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];
    vector<int> v;
    for(int mask=3; mask<(1<<n); mask++)
    {
        int sum = 0;
        for(int i=0; i<n; i++)
        {
            if( __builtin_popcount(mask) == 1)
                break;
            if( (mask>>i)&1)
            {
                sum+= arr[i];
                v.push_back(arr[i]);
            }
        }

        sort(v.begin(), v.end());
        int sz = v.size();
        
        if(sum >= l && sum<= r)
            if(v[sz-1] - v[0] >= x)
                ans++;

        v.clear();
    }

    cout << ans << endl;

}