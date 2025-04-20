#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x,y,z;
    cin>>x>>y>>z;
    double w= 4 - (x+y+z);
    cout<<( w+x >z ? "Yes": "No")<<endl; 

    return 0;
}

