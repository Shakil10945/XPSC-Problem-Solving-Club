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
        for(int i=11; i>=1;i--)
        {
            if(i*i<=n)
            {
                cout<<i*i<<endl;
                break;
            }
        }
    }

    return 0;
}

