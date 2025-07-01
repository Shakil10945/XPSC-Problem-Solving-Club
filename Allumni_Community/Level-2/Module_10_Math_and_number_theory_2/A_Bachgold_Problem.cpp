#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    cout<<n/2<<endl;
    for(int i=1; i<=((n%2==0? (n/2): (n/2)-1)); i++)
    {
        cout<<2<<" ";
    }
    if(n%2) cout<<3<<endl;

    return 0;
}

