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
        vector<int>v(n);
        vector<char>c(n);

        for(int i=0; i<n; i++)  cin>>v[i];
        for(int i=0; i<n; i++)  cin>>c[i];

        int l=0, r = 0;
        long long sum = 0;

        for(int i=0; i<n;)
        {
            if(c[i] == 'L')
            {
                while (c[i] == 'L')
                {
                    sum += v[i];
                    i++;
                }
                continue;
            }
            i++;
        }
        cout<<sum<<endl;
        
    }
    

    
    

    return 0;
}