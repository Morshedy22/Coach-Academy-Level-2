#include <bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(false);cin.tie(nullptr);
#define endl '\n'
typedef long long ll;
int N = 2e5+5;

int main()
{
    FIO
    int n, k, q;
    cin >> n >> k >> q;

    vector<int> partialSum(N), prefSum(N), recommended(N), prefReco(N);

    while(n--)
    {
        int l, r;
        cin >> l >> r;
        partialSum[l]+=1;
        partialSum[r+1]-=1;
    }
    for(int i=1; i<N; i++)
    {
        prefSum[i] = prefSum[i-1] + partialSum[i];
        if(prefSum[i]>=k)
            recommended[i] = 1;
        
        prefReco[i] = prefReco[i-1] + recommended[i];
    }

    
    while(q--)
    {
        int a, b;
        cin >> a >> b;

        cout << prefReco[b] - prefReco[a-1] << endl;
    }

    return 0;
}