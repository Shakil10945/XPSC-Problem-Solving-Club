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
        int n;
        cin>>n;
        int x =0;
        for(int i=0; i<31; i++)
        {
            if(n>>i)
                x=i;
        }
        cout<<x*2+3<<endl;
    }

    return 0;
}

