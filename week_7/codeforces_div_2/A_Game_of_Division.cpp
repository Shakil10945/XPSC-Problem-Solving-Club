#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
        cin>>n>>k;

        vector<int> ar(n);
        for(int i=0; i<n; i++)  cin>>ar[i];

        bool check = false;
        int x = 0;

        for(int i=0; i<n; i++)
        {
            check = false;
            if(check)   break;
            for(int j=0; j<n; j++)
            {
                if(j==i)    continue;;

                if((abs(ar[i] - ar[j])%k == 0))
                {
                    check = true;
                }
            }
            if(!check)
            {
                x=i+1;
                break;
            }
        }
        if(!check)
        {
            cout<<"YES"<<endl<<x<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}