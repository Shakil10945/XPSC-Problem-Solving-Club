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

        while (true)
        {
            int x = 0;
            bool ch = false;
            if(n>3)
            {
                x = max(x, (n-3)); 
                ch = true; 
            }
            if(n%2==0)
            {
                x = max(x, n/2);
                ch = true;
            }
            if(ch)
            {
                n = x;
            }
            else
                break;

        }
        cout<<n<<endl;
        
    }

    return 0;
}

