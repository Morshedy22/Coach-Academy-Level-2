#include <bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

int main()
{   

    FIO
    int pos = 0, neg=0;
    string s;
    cin >> s;

    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='+')
        {
            if(i%2 == 0)
                pos++;
            else
                pos--;
        }
        else
        {
            if(i%2 == 0)
                neg++;
            else
                neg--;
        }
    }

    if(pos == neg)
        cout << "Yes";
    else
        cout << "No";

     
}