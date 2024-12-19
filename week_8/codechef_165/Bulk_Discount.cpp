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
        int n;  cin>>n;
        vector<int> ar(n);
        for(int i=0;i<n; i++)   cin>>ar[i];

        sort(ar.begin(), ar.end());

        long long sum = 0;
        int x = 0;
        for(int i=0; i<n; i++)
        {
            sum+= max(0, (ar[i]-i));
        }
        cout<<sum<<endl;
        
    }
    
    

    return 0;
}