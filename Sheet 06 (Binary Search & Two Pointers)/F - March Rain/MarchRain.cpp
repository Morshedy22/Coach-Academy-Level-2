#include <bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
typedef long long ll;

// int N = 10e5+5;
// vector<int> holes(N);

int n, k;

bool can(int L_Ofstrip, vector<int> holes)
{
    int next = 0;
    for(int i=0; i<k; i++)
    {
        next = upper_bound(holes.begin(), holes.end(), holes[next]+L_Ofstrip-1)  -  holes.begin(); // 3shan yrg3 index lazm minus from begin

        if(holes[next] == *holes.end())
            return true;
    }
    return false;
    
}

int main()
{   

    FIO
    
    int t;
    cin >> t;

    while(t--)
    {
        
        cin >> n >> k;
        vector<int> holes(n);
        for(int i=0; i<n; i++) cin >> holes[i];

        int low = 0, high=1e9, ans=0;

        while(low<=high)
        {
            
            int mid = low + (high-low)/2;
        
            if(can(mid, holes))
            {
                ans = mid;
                high = mid - 1;
            }
            else
                low = mid + 1;
        }
        cout << ans << endl;
        
    }



}