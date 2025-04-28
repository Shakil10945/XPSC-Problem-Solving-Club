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
        int a, b;
        cin>>a>>b;

        int n =0;

        while (a>0 || b>0)
        {
            if(b>1)
            {
                a-=7;
                b-=2;
            }
            else if(b==1)
            {
                a-=11;
                b--;
            }

            else if(b<=0)
            {
                a-=15;
            }
            n++;
        }
        cout<<n<<endl;
        
    }

    return 0;
}

