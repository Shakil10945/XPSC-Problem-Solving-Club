#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> ar(n), count(n+1, 0), not_present;
        for(int i=0; i<n; i++)
        {  
            cin>>ar[i];
            count[ar[i]]++;
        }
        for(int i=1; i<=n; i++)
        {
            if(!count[i])
            {
                not_present.push_back(i);
            }
        }

        
    }
    

    
    

    return 0;
}