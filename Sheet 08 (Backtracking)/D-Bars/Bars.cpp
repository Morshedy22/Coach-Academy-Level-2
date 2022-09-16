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

vector<int> v(25);

bool bars(int indx, int target, int n, int sum)
{
    /* For backtracking to be efficient, we must prune dead
        or redundent branches of the search space whenever possible. */ // d al3mlnah f sum == target
    if(sum == target)
        return 1;
    if(indx == n)
        return 0;
    else
    {
        /* Option 1 "Take" */
        // Do
        sum += v[indx];
        // Recurse
        if(bars(indx+1, target, n, sum))
            return true;
        // Undo
        sum -= v[indx];

        /* Option 2 "Leave" */
        // Recurse
        if(bars(indx+1, target, n, sum))
            return true;
    }
    return false;
         
}

int main()
{
    FIO

    int t;
    cin >> t;

    while(t--)
    {
        // target-> the length of the bar we want to obtain
        // n-> the number of bars we have
        int target, n; 
        cin >> target >> n;
        
        v.clear();
        for(int i=0; i<n; i++)
            cin >> v[i];

        cout << (bars(0, target, n, 0) ? "YES" : "NO") << endl;



    }

    return 0;
}