#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;

    cin>>n>>m;

    cout<<(n==m ? m*2 : max(n,m)+ max(n,m)-1)<<endl;

    return 0;
}

