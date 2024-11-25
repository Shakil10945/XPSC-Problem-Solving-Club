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
        int n, x,y;
        cin>>n>>x>>y;
        vector<int> pokemon(n);
        for(int i=0; i<n; i++)  cin>>pokemon[i];

        long long sum = 0;

        for(int i=0; i<n ; i++)
        {
            sum += min((pokemon[i] *x), y);            
        }

        cout<<sum<<endl;
    }
    

    
    

    return 0;
}