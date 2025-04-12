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
        string str;
        cin>>str;

        int x = 0, y = 0;
        bool check = false;
        for(int i=0;i<n; i++)
        {
            if(str[i] == 'U')   x++;
            else if(str[i] == 'D') x--;
            else if(str[i] == 'L') y--;
            else if(str[i] == 'R') y++;

            if(x == 1 && y==1)
            {
                cout<<"YES"<<endl;
                check = true;
                break;
            }

        }
        if(!check)
            cout<<"NO"<<endl;
    }

    return 0;
}

