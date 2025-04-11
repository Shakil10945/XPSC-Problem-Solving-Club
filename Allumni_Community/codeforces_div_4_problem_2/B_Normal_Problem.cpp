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
        string str;
        cin>>str;
        reverse(str.begin(),str.end());

        for(int i=0; i<str.size(); i++)
        {
            if(str[i] == 'p')
            {
                cout<<'q';
                continue;
            }
            else if(str[i] == 'q')
            {
                cout<<'p';
                continue;
            }
            cout<<str[i];

        }
        cout<<endl;
    }

    return 0;
}

