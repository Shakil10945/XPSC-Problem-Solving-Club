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
        if((a+b+c)%2==1)
        {
            cout<<-1<<endl;
            continue;
        }

        cout<<min((a+b+c)/2, (a+b+c)-max({a,b,c}))<<endl;
    }

    return 0;
}

