 #include <bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);
#pragma GCC optimize "trapv"
#define endl '\n'
typedef long long ll;

int main()
{
    FIO
    //
    cout << fixed << setprecision(1); // 3shan f altaba3a al float yakoud decimal wa7da bs
    //
    int t, x; 
    char c;
    multiset<int> ms;
    multiset<int>::iterator md;
    multiset<int>::iterator md2;
    

    cin >> t;
    while(t--)
    {
        
        cin >> c;
        cin >> x;

        if(ms.empty())
        {
            if(c == 'a')
            {
                ms.insert(x);
                md = ms.begin();

                cout << *md << endl;
            }
            else
            {
                cout << "Wrong!" << endl;
            }
        }
        else if((int)ms.size()%2) // if odd
        {
            if(c == 'a')
            {
                

                ms.insert(x); // kda b2ena even
                
                if(x < *md)
                    md--;

                md2 = md;
                md2++;

                ll sum = (ll)(*md) + (*md2); // leeh long long 3shan momknen md & md2 ykono 'INT_MAX'
                
                if(abs(sum) %2 ) // 3mlt abs 3shan lw kant al sum negative f msh h3rf a check hwa odd wla even
                    cout<< sum / 2.0 << endl; // lw al sum odd f hkhelha ttl3 bl float k msal 1.5 msh 1      
                else
                    cout << sum / 2 << endl; 
            }
            else // c == r //remove
            {
                if(ms.find(x) == ms.end() )
                    cout << "Wrong!" << endl;
                else if ((int)ms.size() == 1)
                {
                    ms.erase(ms.find(x));
                    cout << "Wrong!" << endl;
                }
                else
                {
                    if(x > *md)
                        md--;
                    if(x == *md)
                    {
                        md2 = md;
                        md2--;

                        if(x != *md2) // y3ny hya kda x == md y3ny hsheel md msh hsheel haga ableha
                        {
                            md--;
                        }
                    }
                    ms.erase(ms.find(x));

                    md2 = md;
                    md2++;

                    ll sum = (ll)(*md) + (*md2); // leeh long long 3shan momknen md & md2 ykono 'INT_MAX'
                
                    if(abs(sum) %2 ) // 3mlt abs 3shan lw kant al sum negative f msh h3rf a check hwa odd wla even
                        cout<< sum / 2.0 << endl; // lw al sum odd f hkhelha ttl3 bl float k msal 1.5 msh 1      
                    else
                        cout << sum / 2 << endl; 

                }
            }
        }
        else // even
        {
            if(c == 'a')
            {
                ms.insert(x); // kda b2ena odd

                if( x >= *md)
                    md++;
                
                cout << *md << endl;
            }
            else // c == r //remove
            {
                if(ms.find(x) == ms.end())
                    cout << "Wrong!" << endl;
                else
                {
                    if(x <= *md)
                        md++;
                    ms.erase(ms.find(x));

                    cout << *md << endl;
                }
            }
        }
    }
}
