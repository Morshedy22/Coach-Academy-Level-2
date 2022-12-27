#include <bits/stdc++.h>

using namespace std;

#define FIO ios_base::sync_with_stdio(false);cin.tie(nullptr);
#define F first
#define S second
#define pb push_back
#define all(v) v.begin(),v.end()
#define FILL(a, b) memset(a, b, sizeof(a))
#define el '\n'

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<pii, int> piii;
typedef vector<int> vi;
typedef vector<pii> vii;

const int INF = 0x3f3f3f3f;
const ll INFL = 0x3f3f3f3f3f3f3f3fLL;

/*
---> وتظل تسعى جاهدا في همةٍ   ..  والله يعطي من يشاءُ إذا شكر <---
*/

int N = 1e5;
vi prime(N,1);

void primes()
{
    prime[0] = prime[1] = 0;
    for(int i=2; i<N; i++)
    {
        if(prime[i])
        {
            for(int j=i+i; j<N; j+=i)
            {
                prime[j] = 0;
            }
        }
    }
}


int main()
{
    FIO

    primes();
    // map<char, int> mp;
    // // It is a prime word.
    // // It is not a prime word.
    // char ch_small = 'a', ch_capital = 'A';
    // for(int i=1; i<=26; i++)
    //     mp[ch_small] = i, ch_small++;

    // for(int i=27; i<=52; i++)
    //     mp[ch_capital] = i, ch_capital++;

    
    // // for(auto [x,y] : mp)
    // //     cout << x << " " << y << el;



    string s;
    while(cin >> s)
    {
        int sum = 0;

        for (int i = 0; s[i]; ++i)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
                sum += s[i]-'a'+1;
            else
                sum += s[i]-'A'+27;
        }

        if(prime[sum])
			puts("It is a prime word.");
		else
			puts("It is not a prime word.");
    }
    
    
    
    return 0;
}