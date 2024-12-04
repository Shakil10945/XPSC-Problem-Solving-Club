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

        if( n%2 ==0 && n/2 == k)
        {
            cout<<"YES"<<endl;
        }
        else if(n%2!=0 && (n/2==k || (n/2)+1 ==k))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
        
    }  
    

    return 0;
}