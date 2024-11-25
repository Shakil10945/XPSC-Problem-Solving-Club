#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,s; cin>>n>>s;
        vector<int> arr(n);
        for(int i=0; i<n ; i++)     cin>>arr[i];

        int sum = accumulate(arr.begin(), arr.end(), 0);

        if(s> sum)
        {
            cout<<-1<<endl;
            continue;
        }

        int l=0, r=0, current_sum = 0, min_removals= INT_MAX;

        while (r <n )
        {
            current_sum += arr[r];
            while (current_sum > s)
            {
                current_sum -= arr[l];
                l++;
            }
            if(current_sum == s)
            {
                min_removals = min(min_removals, n-(r-l+1));
            }
            r++;            
        }
        cout<< min_removals<<endl;
        
    }

    return 0;
}
