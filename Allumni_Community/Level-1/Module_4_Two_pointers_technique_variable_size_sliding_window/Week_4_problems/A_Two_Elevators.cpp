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
        int a, b, c;
        cin>>a>>b>>c;

        cout<<(a-1 < abs(b-c) + abs(c-1) ? 1 : a-1 == abs(b-c) + abs(c-1) ? 3: 2)<<endl;
    }

    return 0;
}

