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
        vector<int> ar(n);
        for(int i=0; i<n; i++)      cin>>ar[i];

        int x =0;

        for(int i=0; i<n; i++)
        {
            x = x^ar[i];
        }
        int xx = 0;
        for(int i=0; i<n; i++)
        {
            ar[i] = x ^ ar[i];
            xx = xx^ar[i];
        }
        if(!xx)  cout<<x<<endl;
        else    cout<<-1<<endl;
   
        
    }

    
    

    return 0;
}