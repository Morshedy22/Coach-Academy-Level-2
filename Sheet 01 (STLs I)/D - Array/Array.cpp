#include <bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

int main()
{
    FIO

    int n, x, flag=0;
    cin>>n;

    vector<int> vec(n);
    
    for(int i=0; i<n; i++)
    {
        cin >> vec[i];
        if(vec[i] > 0)
            flag = 1;
    }
    sort(vec.begin(), vec.end());

    vector<int> vneg;
    vector<int> vpos;
    vector<int> vzero;

    // set of negative
    vneg.push_back(vec[0]);

    // set of postive
    for(int i=1; i<n; i++)
    {
        if(flag)
        {
            if(vec[i] <= 0)
                vzero.push_back(vec[i]);
            else
                vpos.push_back(vec[i]);
        }
        else
        {
            if(i<3)
                vpos.push_back(vec[i]);
            else
                vzero.push_back(vec[i]);
        }
    }

    // print vector of negative product elements
    cout << vneg.size() << " " << vneg[0] << endl;

    // print vector of postive product elements
    cout << vpos.size() << " ";
    for(auto x : vpos)
        cout << x << " ";
    cout<< "\n";

    // print vector of Zero product elements
    cout << vzero.size() << " ";
    for(auto x : vzero)
        cout << x << " ";





    


}