#include <bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);
#pragma GCC optimize "trapv"
#define endl '\n'
typedef long long ll;

int main()
{
    FIO
    int t;
    cin >> t;

    while(t--)
    {
        int n, a, b, num_substring=1;
        cin >> n >> a >> b;
        
        string s;
        cin >> s;
        for(int i=0; i<n-1; i++)
        {
            if(s[i] != s[i+1])
                num_substring++;
        }
        if(b<0)
            cout<< (n*a+ (num_substring/2 +1)*b) << endl;
        else
            cout << n*(a+b)<< endl;
    }

}