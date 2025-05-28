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
        int a;  cin>>a;

        int x = sqrt(a);

        if(x*x ==a)
            cout<<0<<" "<<x<<endl;
        else
            cout<<-1<<endl;
    }

    return 0;
}

