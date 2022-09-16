#include <bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
typedef long long ll;


vector<int> one(3), has(3), buy(3);
ll rubles;

bool canMakeBurger(ll NumOfBurgers)
{
    ll temp_rubles = rubles;

    for(int i=0; i<3; i++)
    {
        if(one[i]==0)
            continue;
        if( NumOfBurgers <= has[i]/one[i] )
            continue;
        else if((NumOfBurgers * one[i] - has[i]) * buy[i] <= temp_rubles)
            temp_rubles -= ((NumOfBurgers * one[i] - has[i]) * buy[i]);
        else
            return false;
    }
    return true;
}

int main()
{
    FIO

    string s;
    cin >> s;
    
    for(auto c : s)
    {
        if( c == 'B')       one[0]++;
        else if( c == 'S')   one[1]++;
        else if(c == 'C')   one[2]++;
    }
    for(auto& x : has)  cin >> x;
    for(auto& x : buy)  cin >> x;
    cin >> rubles;
    
    ll low =0, high=10e13, ans = 0;

    while(low<=high)
    {
        ll mid = low + (high-low)/2;

        if(canMakeBurger(mid))
        {
            ans = mid;
            low = mid+1;  
        }
        else
            high = mid - 1;
    }

    cout << ans;    
}