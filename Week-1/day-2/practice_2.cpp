#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;

    for(int i=1; i<=b; i++)
    {
        int x = c*i;
        if(x>=a && x<=b)
        {
            cout<< x<<endl;
            return 0;
        }

        if(x>b)     break;
    }

    cout<< -1<<endl;

    return 0;
}