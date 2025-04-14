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
        cout<< min(m,a) + min(m,b) + (min(2*m-(min(m,a) + min(m,b)), c))<<endl;
    }

    return 0;
}

