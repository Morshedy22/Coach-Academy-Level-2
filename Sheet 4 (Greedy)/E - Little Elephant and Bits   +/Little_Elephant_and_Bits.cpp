#include <bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);
#pragma GCC optimize "trapv"
#define endl '\n'
typedef long long ll;

int main()
{
    FIO
    // alfkar 3ayz asheel awl 0 hy2blny 3la alshmal
    string s;
    cin >> s;
    int flag = 0;
    for(auto& c : s)
    {
        if(c == '0')
        {
            c = '*';
            flag = 1;
            break;
        }
    }

    if(flag == 0)
    {
        s[0] = '*';
    }

    for(auto c : s)
    {
        if(c == '1' || c== '0')
            cout << c;
    }

    
} 