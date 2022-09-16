#include <bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
typedef long long ll;

int main()
{
    FIO

    int n;
    cin >> n;

    vector<int> v(n);
    int freq[21]={};

    for(auto& i : v) cin >> i;

    for(auto i : v)
    {
        for(int j=0; j<21; j++)
        {
            if((i>>j)&1)
                freq[j]++;
        }
    }
    
    for(auto& i : v)
    {
        for(int j=0; j<21; j++)
        {
            if(freq[j])
            {
                i |= (1<<j);
                freq[j]--; 
            }
            else
            {
                if((i>>j)&1)
                {
                    i -= (1<<j);
                }
            }
        }
    }
    ll sum = 0;
    for(auto i : v)
    {   
        
        sum += ((ll)i*i);
    }
    
    
    cout << sum;
}