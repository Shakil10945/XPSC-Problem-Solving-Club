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
        int m, a,b ,c ;
        cin>>m>>a>>b>>c;
        int x;
        cout<< min(m,a) + (x = min(c, max(0, m-a)) , c-=x,x)
            +min(m,b) + (x = min(c, max(0, m-b)))<<endl;
    }

    return 0;
}

