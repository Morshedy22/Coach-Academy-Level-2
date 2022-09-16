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



// Solved 1_based
int n; // n Queens you entered
vi ans;
vector<vi> posQueens;


bool NotAttack(int row, int col)
{
    // Function to know Queen is Attack or not
    
    if(ans.size() == 1)
        return true;

    
    for(int i=1; i<(int)ans.size(); i++)
    {
        if(row == ans[i] || (abs(row - ans[i]) == abs(i - col)))
            return false;
    }

    return true;
    
}

void generatequeens(int col)
{
    if(col == n+1)
    {
        posQueens.push_back(ans);
        return;
    }

    for(int i=1; i<=n; i++)
    {   
        if(NotAttack(i, col))
        {
            
            //Do    
            ans.push_back(i);
            //Recurse
            generatequeens(col+1);
            //Undo
            ans.pop_back();
        }

    }  
    return;  
}

int main()
{
    FIO
    cin >> n;

    ans.push_back(0);
    generatequeens(1);

   cout << "\n\t\tThere are " << (int)posQueens.size() << " Possible Soultion for " << n << " Queens"
        << " in Chess " << n << "x" << n << "\n\n";
    int chess = 1;
    for(auto pos : posQueens)
    {
        cout << "Chess #" << chess++ << "\n";
        for(int i=1; i<=n; i++)
        {
            int x = pos[i];
            for(int j=1; j<=n; j++)
            {
                if(j == x)
                    cout << "X ";
                else
                    cout << ". ";
            }
            cout << endl;
        }
        cout << "\n\n";
    }


    return 0;
}