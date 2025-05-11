#include <bits/stdc++.h>
using namespace std;
const int x = 1e9 +7;

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
        long long fact = 1;

        for(int i=n;i>=1; i--)
        {
            fact = (1LL* i%x * fact%x)%x;
        }
        cout<<fact<<endl;
    }

    return 0;
}

