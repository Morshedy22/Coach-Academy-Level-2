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

    int low = -2e9, high = 2e9;
    while(n--)
    {
        string s; int x; char c;

        cin >> s >> x >> c;
            
        if( (s == ">" && c == 'Y') || (s == "<=" && c == 'N'))          low = max(low,x + 1);

        else if( (s == "<" && c == 'Y') || (s == ">=" && c == 'N'))     high = min(high,x - 1);
        
        else if( (s == ">=" && c == 'Y') || (s == "<" && c == 'N'))     low = max(low,x);

        else if( (s == "<=" && c == 'Y') || (s == ">" && c == 'N'))     high = min(high,x);
    }
    
    if(low > high)
        cout << "Impossible";
    else
        cout << low;
}