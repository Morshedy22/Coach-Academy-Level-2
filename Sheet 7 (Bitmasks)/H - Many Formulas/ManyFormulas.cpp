#include <bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
typedef long long ll;

int main()
{
    FIO

    string s;
    cin >> s;
    int sz = s.size();
    int arr[sz];
    for(int i=0; i<sz; i++)
    {
        arr[i] = s[i] - '0';
    }

    int flag = 1;;
    vector<ll> v;
    for(int mask = 0; mask < (1<<(sz-1)); mask++)
    {
        ll temp = arr[0];
        for(int i=0; i<sz-1; i++)
        {
            if((mask>>i)&1)
            {
                flag = 0;
                v.push_back(temp);
                temp = arr[i+1];

                if(i+1 == sz-1)
                    v.push_back(temp);
                
            }
            else
            {   
                flag = 1;
                temp = temp * 10 + arr[i+1];
            }
        }
        
        if(flag)
            v.push_back(temp);
        
    }

    unsigned long long sum = 0;
    for(auto x : v)
        sum+= x;

    cout << sum;

}