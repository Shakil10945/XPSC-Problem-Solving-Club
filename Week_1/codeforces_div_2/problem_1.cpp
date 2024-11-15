#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;

        int zero =0;
        int one = 0;

        vector<int> v(2*n);
        for(int i=0;i<2*n;i++)
        {
            cin>>v[i];

            if(v[i] == 0)   zero++;
            if(v[i]==1)     one++;
        }

        int ans1 =0;
        int ans2 =0;

        if(zero%2==0 && one%2==0)
        {
            ans1 =0;
            ans2 = min(zero, one);
        }

        if(zero%2 !=0 || one%2 !=0)
        {
            ans1 = 1;
            ans2 = min(one, zero);

        }

        cout<< ans1<< " "<<ans2<<endl;

    }
    
    

    return 0;
}