#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n,x,y;  cin>>n>>x>>y;

        cout<<((int)ceil((double)n/(min(x,y))))<<endl;
    }

    return 0;
}

