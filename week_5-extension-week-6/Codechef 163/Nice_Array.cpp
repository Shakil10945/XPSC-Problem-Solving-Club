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

        vector<int> a(n);
        for(int i=0; i<n; i++)
            cin>>a[i];

        vector<int> b(n);
        int pos_count = 0;
        int neg_count = 0;
        for(int i=0; i<n; i++)
        {
            b[i] = a[i]/k;
            if(a[i]>=0 && abs(a[i]) %k != 0)
            {
                pos_count++;              
            }
            if(a[i]<0 && abs(a[i]) %k != 0)
            {
                neg_count++;              
            }
        }

        long long  sum = accumulate(b.begin(), b.end(), 0);

        if(sum == 0)
            cout<<"YES"<<endl;
        
        else if(sum<0)
        {
            if(sum+ pos_count>=0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;

        }
        else if(sum>0)
        {
            if(sum - neg_count<=0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
     
        
    }
    
    

    return 0;
}