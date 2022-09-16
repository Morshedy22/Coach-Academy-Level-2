#include <bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(false);cin.tie(nullptr);
#define endl '\n'
typedef long long ll;

vector<double> stations(3);
bool Can(double d, vector<int>& v)
{
    int next=0;
    for(int i=0; i<3; i++)
    {
        next = upper_bound(v.begin(), v.end(), v[next]+d*2) - v.begin();
        if( v[next] == *v.end())
            return true;
    }
    
    return false; 
}

int main()
{
    FIO

    int n;
    cin >> n;

    vector<int> v(n);

    for(auto &i : v) cin >> i;

    sort(v.begin(), v.end());

    double low = 0, high = 1e9, mid=0, ans=0;

    for(int i=0; i<100; i++)
    {
        mid = (high+low)/2;

        if(Can(mid, v))
        {
            ans = mid;
            high = mid;
        }
        else
            low = mid;
    } 

    cout << fixed << setprecision(6);
    cout << ans << endl;

    int next=0;
    for(int i=0; i<3; i++)
    {
        next = (next == v.size() ? next-1 : next);

        cout << v[next] + ans << " ";
        next = upper_bound(v.begin(), v.end(), v[next]+ans*2) - v.begin();
    }

}