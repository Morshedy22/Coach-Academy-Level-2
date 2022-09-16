#include <bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
 

int main()
{   

    FIO
    int t;
    cin >> t;
    while(t--)
    {
        int length, n, flag = 0;
        cin >> length >> n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }

        for(int mask=0; mask <(1<<n); mask++)
        {
            vector<int> temp;
            int sum = 0;
            for(int i=0; i<31; i++)
            {
                if((mask>>i)&1)
                {
                    sum += arr[i];
                    temp.push_back(arr[i]);
                }
            }
            if(sum == length)
                flag = 1;
        }

        cout << (flag ? "YES" : "NO") << endl;

    }

}