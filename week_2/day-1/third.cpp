#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;  cin>>t;
    while (t--)
    {
        int n;  cin>>n;

        int sum=0;

        for(int i=2; i<=n;i+=7)
        {
            sum++;

        }

        cout<<sum<<endl;
    }
    

    return 0;
}