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
        vector<int> v(n);
        for(int i=0; i<n; i++)  cin>>v[i];

        long long sum = accumulate(v.begin(), v.end(), 0);

        if(sum%n == 0)
        {
            //cout<<"YES"<<endl;
            bool check = false;
            for(int i=0; i<n-2; i++)
            {
                if(v[i] == v[i+1] || v[i] == v[i+2])
                {
                    check = true;
                }
            }
            if(check)       cout<<"NO"<<endl;
            else            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
                  
        
    }

    
    

    return 0;
}