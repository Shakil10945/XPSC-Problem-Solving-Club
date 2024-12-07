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
        int n, m;
        cin>>n>>m;
        vector<string> a(n);
        for(int i=0; i<n; i++)  cin>>a[i];
        int sum = 0;
        int line = 0;
        for(int i=0; i<n; i++)
        {
            sum += a[i].size();

            if(sum<=m)
            {
                line++;
            }
            else
                break;
                        
        }
        cout<<line<<endl;

        
        
    }
    
    

    return 0;
}