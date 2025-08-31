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

        for(int i=str.size()-1; i>=0; i--)
            cout<<(str[i] == 'q'? 'p': (str[i]=='p'? 'q': str[i]));
        cout<<endl;
    }

    return 0;
}

