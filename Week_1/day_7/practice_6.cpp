#include <bits/stdc++.h>
using namespace std;


int main()
{

    int n,t;
    cin>>n>>t;

    int s =0;

    for(int i=0;i<=100; i++)
    {
        for(int j=0; j<=100; j++)
        {
            for(int k=0; k<=100; k++)
            {
                if(i+j+k <= n && i*j*k<=t)
                {
                    s++;
                }
            }
        }
    }

    cout<<s<<endl;
    

    return 0;
}