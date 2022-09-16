#include <bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);
#pragma GCC optimize "trapv"
#define endl '\n'
typedef long long ll;

int main()
{
    FIO

    int q;
    cin >> q;

    while(q--)
    {
        int n, k, x, c=0, flag=1;
        cin >> n >> k;
        ll sum=0;
        vector<int> v;

        for(int i=0; i<n; i++)
        {
            cin >> x;
            if((int)v.size() == k-1)
            {
                sum+=x;
            }
            else if(x%2)
            {
                v.push_back(i+1);
            }
        }

        if(sum%2)
        {
            cout << "YES" << endl;
            for(auto it : v)
                cout << it << " ";
            cout << n << "\n";
        }
        else
            cout << "NO" << endl;            

    }
}