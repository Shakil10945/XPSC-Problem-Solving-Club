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
        vector<int>v(n);

        int x =0;
        vector<int>pos;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];

            if(v[i]<0)  x++;
            else if(v[i]>0)
                pos.push_back(i);
        }
        if(x==n)        cout<<0<<endl;
        else
        {
            int neg = 0;

            if(!pos.empty())
            {
                for(int i=pos[0]; i<=pos.back(); i++)
                {
                    if(v[i]<0)      neg++;

                    //cout<<"vec"<<v[i]<<" ";
                }

            }
            cout<<neg<<endl;
            
        }
    }
    
    

    return 0;
}