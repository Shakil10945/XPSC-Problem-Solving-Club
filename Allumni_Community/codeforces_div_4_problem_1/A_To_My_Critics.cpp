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
        int a,b,c;
        cin>>a>>b>>c;

        cout<<(((a+b >= 10) || (b +c >= 10) || (c+a)>=10)? "YES" : "NO")<<endl;
    }

    return 0;
}

