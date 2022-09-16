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


/* 
    There are 92 solutions in 8 queen
    so Genereate all Solutions and put correct solution in vector
    Then
        Find minmum number of moves
*/


// Solved 1_based
vi chess(9), ans;
vector<vi> posQueens;
int cnt=0;
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
    if(col == 9)
    {
        posQueens.push_back(ans);
        return;
    }

    for(int i=1; i<=8; i++)
    {
        cnt++;
        
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
    ans.push_back(0);
    generatequeens(1);

    
    //How many Solution in 8 queen
    // cout << (int)posQueens.size(); // 92
    
    // How many try to get all possible solution
    cout << cnt;
    //What is possible solutions
    /* for(auto pos : posQueens)
    {
        for(int i=1; i<=8; i++)
            cout << pos[i] << " ";
        cout << endl;
    } */

    //How can I find Minmum number of moves
    // int t = 1;
    // while(cin >> chess[1] >> chess[2] >> chess[3] >> chess[4] >> chess[5] >> chess[6] >> chess[7] >> chess[8])
    // {
        
        // int mxmoves = 8; // Maximum moves   
    //     for(auto pos : posQueens)
    //     {
    //         int diff = 0;
    //         for(int i=1; i<=8; i++)
    //         {
    //             diff += (chess[i] != pos[i]);
    //         }
    //         mxmoves = min(mxmoves, diff);
    //     }
    //     cout << "Case " << t++ << ": " << mxmoves << endl;
    // }



    return 0;
}