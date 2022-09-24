#include <bits/stdc++.h>

using namespace std;

#define FIO ios_base::sync_with_stdio(false);cin.tie(nullptr);
#define F first
#define S second
#define pb push_back
#define all(v) v.begin(),v.end()
#define FILL(a, b) memset(a, b, sizeof(a))
#define endl '\n'

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<pii, int> piii;
typedef vector<int> vi;
typedef vector<pii> vii;

const int INF = 0x3f3f3f3f;
const ll INFL = 0x3f3f3f3f3f3f3f3fLL;

int N = 1e5+5;


int main()
{
    FIO

    int n, m, k;
    cin >> n >> m >> k;

    // vi v(n+2), prefArray(n+2), prefoperations(n+2);
    vector<ll> v(n+2), prefArray(n+2), prefoperations(m+2); // prefoperations(m+2) not (n+2) // bec opeartion is m

    for(int i=1; i<=n; i++)
        cin >> v[i];


    pair< pair<ll,ll>, ll >  operation[m+1];  // opeartion ->   < <l,r>, d >

    for(int i=1; i<=m; i++)
        cin >> operation[i].F.F >> operation[i].F.S >> operation[i].S;


    while(k--)
    {  
        int x, y;
        cin >> x >> y;

        prefoperations[x]+=1;
        prefoperations[y+1]-=1;
    }


    for(int i=1; i<=m+1; i++)
        prefoperations[i] += prefoperations[i-1];



    for(int i=1; i<=m; i++) // loop until m not n bec i loop forall opearions
    {
        prefArray[ operation[i].F.F ] += (operation[i].S * prefoperations[i]) ;  // opeartion[i].F.F that mean l
        prefArray[ operation[i].F.S +1] -= (operation[i].S * prefoperations[i]) ; // opeartion[i].F.S that mean r

    }



    for(int i=1; i<=n+1; i++)
        prefArray[i] += prefArray[i-1];

    for(int i=1; i<=n; i++)
    {
        v[i] += prefArray[i];
        cout << v[i] << " ";
    }

    return 0;
}
