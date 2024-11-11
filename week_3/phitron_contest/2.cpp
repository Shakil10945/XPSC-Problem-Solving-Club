#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,x,y;
        cin>>n>>x>>y;
        
        int one = 0; 
        int two = 0;
        if(n%2 == 0)
        {
            one = n*x;
            two = (n/2)*y;
            cout<<max(one, two)<<endl;
        }
        else
        {
            one = (n-1)*x;
            two = ((n-1)/2)*y;

            cout<<max(one, two) + x<<endl;
        }
    }
    
    

    return 0;
}