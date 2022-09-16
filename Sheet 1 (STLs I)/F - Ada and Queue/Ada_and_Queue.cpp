#include <bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

int main()
{
    FIO

    int t, x;
    cin >> t;
    int count = 0;
    deque<int> dq;
    while(t--)
    {
        string s;
        cin >> s;
        if(s == "reverse")  // alfkra f al reverse kan bygeem Time Limit Exceed f 3shan kda astkhdmt alfkra de
            count++;

        if( dq.empty() && (s == "back" || s=="front"))
        {
                cout << "No job for Ada?" << endl;
        }
        else if(count %2 == 0)
        {
            if(s== "back")
            {
                cout << dq.back() << endl;
                dq.pop_back();
            }
            else if( s == "front")
            {
                cout << dq.front() << endl;
                dq.pop_front();
            }
            else if (s== "push_back")
            {
                cin >> x;
                dq.push_back(x);
            }
            else if (s== "toFront")
            {
                cin >> x;
                dq.push_front(x);
            }
        }
        else
        {
            if(s== "back")
            {
                cout << dq.front() << endl;
                dq.pop_front();
            }
            else if( s == "front")
            {
                cout << dq.back() << endl;
                dq.pop_back();
            }
            else if (s== "push_back")
            {
                cin >> x;
                dq.push_front(x);
            }
            else if (s== "toFront")
            {
                cin >> x;
                dq.push_back(x);
            }
        }
        
    }
}