#include <bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);
#pragma GCC optimize "trapv"
#define endl '\n'
 

int main()
{   

    FIO

    map<char, char> mpL, mpR;
    string s = "qwertyuiopasdfghjkl;zxcvbnm,./"; 

    for(int i=0; i<30; i++)
    {
        if(i==0 || i==10 || i==20)
            continue;
        
        mpR[s[i]] = s[i-1];

    }
    for(int i=0; i<30; i++)
    {
        if(i==9 || i==29 || i==29)
            continue;
        
        mpL[s[i]] = s[i+1];

    }

    char c;
    cin >> c;
    string str;
    cin >> str;

    if(c == 'L')
    {
        for(int i=0; i<str.size(); i++)
            cout<< mpL[str[i]];
    }
    else if(c == 'R')
    {
        for(int i=0; i<str.size(); i++)
            cout<< mpR[str[i]];
    }
}