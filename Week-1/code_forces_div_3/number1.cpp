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

        for(int i=0;i<n;i++)
            cin>>v[i];

        bool y = true;

        for(int i=0;i<n-1;i++)
        {
            //cout<<abs(v[i]-v[i+1])<<endl<<endl;
            if(abs(v[i] - v[i+1]) ==5 || abs(v[i]-v[i+1])==7)
            {
                continue;
            }
            else
            {
                y =false;
                break;
            }
        }
        if(!y)      cout<< "NO"<<endl;
        else        cout<< "YES"<<endl;
    }
    
    

    return 0;
}