#include <bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);
#pragma GCC optimize "trapv"
#define endl '\n'
typedef long long ll;

int sum = 0, mx = 0;

void potions(vector<int> &v, int indx, int ans)
{
    mx = max(mx, ans);
    cout << mx << endl;
    cout << indx << endl;
    sum +=v[indx];
    if(sum < 0)
    {
        sum = 0;
        return;
    }
    if(indx == (int)v.size())
        return;

    if(v[indx+1] < 0)
        potions(v, ++indx, ans);
    
    potions(v, ++indx, ++ans);
}


int main()
{   

    FIO

    int n; 
    cin >> n;

    vector<int> v(n);

    for(auto& x : v)
        cin >> x;    

    potions(v, 0, 0);
    cout << mx << endl;
}