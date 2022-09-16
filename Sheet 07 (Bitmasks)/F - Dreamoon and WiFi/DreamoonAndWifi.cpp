#include <bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
typedef long long ll;



int main()
{   

    FIO
    int cntSends = 0, cntRecognizes = 0, cntNotRecongizes = 0;
    float ans = 0.0;
    string sends, recognizes;
    cin >> sends >> recognizes;

    for(auto c : sends)
    {
        if( c == '+')
            cntSends++;
        else
            cntSends--;
    }

    for(auto c : recognizes)
    {
        if(c == '+')
            cntRecognizes++;
        else if(c == '-')
            cntRecognizes--;
        else
            cntNotRecongizes++;
    }
    // 0.000000000000 12
    vector<int> v;
    for(int mask=0; mask<(1<<cntNotRecongizes); mask++)
    {
        int sum = cntRecognizes;
        for(int i=0; i<cntNotRecongizes; i++)
        {
            // assume 1 is + and 0 is -
            if((mask>>i)&1)
                sum++;
            else
                sum--;
        }
        v.push_back(sum);
        if(sum == cntSends)
            ans++;
    }


    printf("%.12f",(double)ans/(1<<cntNotRecongizes));
    
}