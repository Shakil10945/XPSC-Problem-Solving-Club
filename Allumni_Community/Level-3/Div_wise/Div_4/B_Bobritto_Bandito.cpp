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
        int n, m, l, r;
        cin>>n>>m>>l>>r;

        cout<< (0-min(-l,m))<< " "<< (0-min(-l,m))+m<<endl;
    }

    return 0;
}

