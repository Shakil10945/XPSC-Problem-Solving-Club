#include <bits/stdc++.h>
using namespace std;


int main()
{
    int a,b,t;
    cin>>a>>b>>t;

    float x = t + 0.5;

    int c =0;

    for(int i=1; i<=t; i++)
    {
        int y = i * a;

        if(y>t)     break;

        c+=b;
    }

    cout<< c<<endl;
    

    return 0;
}