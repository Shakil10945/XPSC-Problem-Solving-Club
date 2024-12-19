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
        int n, k;
        cin>>n>>k;

        int subsector = (n/k);
        int l = 1;
        int j=subsector+1;
        for(int i=1; i<=n; i++)
        {
            if(i%k==0)
            {
                cout<<l<< " ";
                l++;
            }
            else
            {
                cout<<j<<" ";
                j++;
            }
        }
        cout<<endl;
  
        
    }

    
    

    return 0;
}