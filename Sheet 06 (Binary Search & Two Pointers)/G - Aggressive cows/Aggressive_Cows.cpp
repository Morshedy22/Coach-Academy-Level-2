W


int n , c;

bool ok(int length, vector<int> stalls)
{
   int next = -1, N_cows = 0;

   for(int i=0; i<n; i++)
   {
        if(stalls[i] > next)
        {
            next = stalls[i] + length - 1;
            N_cows++;
        }
   }

   if(N_cows>= c)
        return true;
    else
        return false;
}

int main()
{
    FIO

    int t;
    cin >> t;

    while (t--)
    {
        
        cin >> n >> c;

        vector<int> v(n);
        for(auto& i : v) cin >> i;

        sort(v.begin(), v.end());

        int low = 0, high = 1e9, ans = 0;

        while(low <= high)
        {
            int mid = low + (high-low)/2;
            
            if(ok(mid, v)) 
            {
                ans = mid;
                low = mid+1;
            }
            else
                high = mid - 1;
        }

        cout << ans << endl;
    }
    
}