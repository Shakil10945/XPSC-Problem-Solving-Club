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
        int n;  cin>>n;
        int r =1;
        int count = 1;
        while(r<n)
        {
            r = r*2+2;   count++;
        }
        cout<<count<<endl;
    }

    return 0;
}

