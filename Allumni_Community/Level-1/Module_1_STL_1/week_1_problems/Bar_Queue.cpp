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
        int n;cin>>n;
        string str; cin>>str;

        int b=0, g =0;
        bool ch = false;
        for(int i=0; i<n; i++)
        {
            if(str[i] == 'B') b++;
            else    g++;

            if(b>g*2)
            {
                cout<<i+1<<endl;
                ch = true;
                
            }
        }
        if(!ch) cout<<n<<endl;
    }

    return 0;
}

