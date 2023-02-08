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


int main()
{
    FIO
    int t, n;
    cin >> t;

    while(t--)
    {
        cin >> n;
        int arr[n+1][5];

        for(int i=1; i<=n; i++)
            for(int j=0; j<5; j++)
                cin >> arr[i][j];


        int medal = 1;
        
        for(int i=2; i<=n; i++)
        {
            int cnt = 0;
            for(int j = 0; j<5; j++)
            {
                if(arr[i][j] < arr[medal][j]) // less than 3shan yksb
                    cnt++;
            }
            if(cnt>=3)
                medal = i;
        }
        
        for(int i=1; i<=n; i++)
        {
            if(i == medal)
                continue;
            
            int cnt = 0;
            for(int j=0; j<5; j++)
            {
                if( arr[medal][j] < arr[i][j])
                    cnt++;
            }

            if(cnt<3)
                medal = -1;
        }

        cout << medal << '\n';
        
    }

    return 0;
}