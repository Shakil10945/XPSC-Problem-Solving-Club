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
        int a, x, y;
        cin>>a>>x>>y;

        if(x>y) swap(x,y);

        cout<<((a>=x && a<=y)? "NO": "YES")<<endl;
    }

    return 0;
}

