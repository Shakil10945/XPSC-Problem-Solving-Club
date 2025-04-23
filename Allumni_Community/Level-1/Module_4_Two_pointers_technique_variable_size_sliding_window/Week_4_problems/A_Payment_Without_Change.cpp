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
        int a,b,n, s;   cin>>a>>b>>n>>s;

        cout<<(s-(min(s/n, a)*n) <=b? "YES": "NO")<<endl;
    }

    return 0;
}

