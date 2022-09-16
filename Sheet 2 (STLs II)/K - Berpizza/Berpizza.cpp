#include <bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);
#pragma GCC optimize "trapv"
#define endl '\n'
typedef long long ll;

using pair_type = std::pair<int, int>;

struct PairCmp1
{
    bool operator()(const pair_type& lhs, const pair_type& rhs) const
    { 
        return lhs.first < rhs.first; 
    }
};

struct PairCmp2
{
    bool operator()(const pair_type& lhs, const pair_type& rhs) const
    { 
        return lhs.second > rhs.second; 
    }
};

int main()
{
    FIO

    int q, n, x, k = 1;
    cin >> q;
    
    set< pair_type > q2;
    set< pair_type > q3;
    




    while(q--)
    {
        cin >> n;

        if(n == 1)
        {
            cin >> x;
            q2.insert({k, x});
            q3.insert({x, k});
            k++;
        }
        else if(n == 2)
        {
            auto p1 = q2.begin();
            cout << p1->first << " ";
            q2.erase(p1);
            q3.erase({p1->second, p1->first});
            
        }
        else if(n == 3)
        {
            auto it = --q3.end();
            
            auto p2 = q3.lower_bound({it->first, -1}); // lower_bound 3shan lw mtkrr fna 3ayz alcustomer al dakhl al2wl

            cout << p2->second << " ";
            q3.erase(p2);
            q2.erase({p2->second, p2->first});
        }
        
    }
}