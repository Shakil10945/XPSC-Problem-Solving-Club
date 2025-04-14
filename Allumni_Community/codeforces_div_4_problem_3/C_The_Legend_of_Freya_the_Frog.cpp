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
        int x,y,k;
        cin>>x>>y>>k;

        cout<<((x>y)? 2*(x/k) + ((x%k)? 1: 0): 2*(y/k) + ((y%k)? 2: 0))<<endl;


    }

    return 0;
}

