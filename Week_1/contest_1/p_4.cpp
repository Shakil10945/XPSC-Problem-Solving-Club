#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int x;
        cin>>x;
        
        x = 100-x;

        x /= 10;

        cout<<x*10<<endl;
    }
    
    

    return 0;
}