#include <bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);
#pragma GCC optimize "trapv"
#define endl '\n'
 
int main()
{   

    FIO
    multiset <int> ms;
    vector < pair<string, int> >v;
    string s;
    // - insert X , - getMin X , removeMin

    int t, x;
    cin >> t;

    while(t--)
    {
        cin >> s;

        if(s == "insert")
        {
            cin >> x;
            ms.emplace(x);
            v.emplace_back(make_pair(s,x));
        }
        else if(s == "removeMin")
        {
            if(!ms.empty())
            {
                multiset<int>::iterator it = ms.begin();
                ms.erase(it);
                v.emplace_back(make_pair(s,0));
            }       
            else
            {
                v.emplace_back("insert",0);
                v.emplace_back(make_pair(s,0));
            }                                                      
        }
        else if( s== "getMin")   // alfkra kolha f getMin
        {

            cin>>x;
            auto it=ms.begin();
            
            while(!ms.empty())
            {
                it=ms.begin();
                if(x==(*it)||(x<(*it)))
                        break;
                
                v.emplace_back(make_pair("removeMin",0));
                ms.erase(it);
            }
            if(ms.empty() || x<(*it) )
            {
                v.emplace_back(make_pair("insert",x));
                ms.insert(x);
            }
            v.emplace_back(make_pair(s,x));
        

        }
    }

    cout << (int)v.size() << endl;
    for(auto x : v)
    {
        if( x.first == "removeMin")
            cout << x.first << endl;
        else
            cout << x.first << " " << x.second << endl;
    }
    
}