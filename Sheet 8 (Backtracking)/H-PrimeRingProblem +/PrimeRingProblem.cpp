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

int n;
vi prime(35,1), ans(20,1), visited(20,0);


void primeNumbers()
{
    // prime[0] = prime[1] = 0;

    for(int i=2; i<=35; i++)
    {
        if(prime[i])
        {
            for(int j = i*i; j<=35; j+=i)
                prime[j] = 0;
        }
    }
}

bool isPrime(int x)
{
    return prime[x];
}

void generateRing(int indx)
{
    // if indx == n we have an answer
    if(indx == n)
    {
        if(!isPrime(1 + ans[indx-1]) )
            return;
        
        // you are not printing any space after every last number of a array/prime ring
        cout << 1;
        for(int i=1; i<n; i++)
        {
            cout <<" "<<ans[i];
        }
        cout << endl;
        return;
    }

    for(int i=2; i<=n; i++)
    {
        if(visited[i]) continue;
        if(isPrime(i + ans[indx-1]))
        {
            // Do
            visited[i] = 1;
            ans[indx] = i;
            // Recurse
            generateRing(indx+1);
            // Undo
            visited[i] = 0;
        }
    }

}

int main()
{
    FIO

    primeNumbers();

    // 0) you are printing a newline before any cases greater than 1,
    // 1)  you are not printing any space after every last number of a array/prime ring
    int cas = 0;
    while( cin >> n)
    {
        if(cas++) cout<<'\n';

        cout << "Case " << cas << ":\n";
        generateRing(1);    

    }

    return 0;
}