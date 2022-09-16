#include <bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);
#pragma GCC optimize "trapv"
#define endl '\n'
typedef long long ll;

int main()
{
    FIO

    int n , t, x;

    cin >> n >> t;
    int a[n];

    for(int i=0; i<n; i++)
        cin >> a[i];

    int p2=0, books=0, ans=0, sum=0;
    
    
    for(int p1=0; p1<n; p1++)
    {
        while(p2 < n && sum + a[p2] <= t)
        {
            sum += a[p2];
            books++;
            p2++;
        }
        ans = max(ans, books);
        books--;
        sum-= a[p1];
        
    }

    cout << ans;
    
    

}