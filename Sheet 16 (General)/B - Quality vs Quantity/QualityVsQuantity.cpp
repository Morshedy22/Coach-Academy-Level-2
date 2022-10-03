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

    while (t--)
    {
        cin >> n;
        vi arr(n);
        ll sumR = 0, sumB = 0;
        int countR = 1, countB = 1;

        for(auto& i : arr) cin >> i;

        sort(all(arr));
        int pb = 0, pr = n-1;

        sumB += arr[pb];
        sumR += arr[pr];

        int flag = 0;
        while(pb < pr)
        {
            if(sumR > sumB && countR < countB)
                flag = 1;
            
            if(sumB > sumR)
            {
                pr--;
                countR++;
                sumR += arr[pr];
            }
            else
            {
                pb++;
                countB++;
                sumB += arr[pb];
            }
        }

        cout << (flag ? "Yes" : "No") << el;

    }
    
    return 0;
}