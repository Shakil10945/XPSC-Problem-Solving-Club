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
        int len = str.size();

        bool ch = false;

        for(int i=0; i<len-1; i++)
        {
            cout<<str[i];

            if(str[i] == str[i+1] && !ch)
            {
                cout<<char((((str[i]) - 'a' +1)%26) + 'a');
                ch = true;
            }
        }
        cout<<(ch ? string(1,str[len-1]): str[len-1] + string (1, char((((str[len-1]) - 'a' +1)%26) + 'a')))<<endl;
    }

    return 0;
}

