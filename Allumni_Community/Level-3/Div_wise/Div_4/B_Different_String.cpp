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

        string b = str;

        sort(b.begin(),b.end());
        if(b[0]==b[b.size()-1])
        {
            cout<<"NO"<<endl;
            continue;
        }
        else
        {
            cout<<"YES"<<endl;

            int l = 0, r=b.size()-1;

            for(int i=0; i<b.size(); i++)
                if(str[i]!=str[0])
                {
                    swap(str[i], str[0]);
                    break;
                }
            cout<<str<<endl;
        }
    }

    return 0;
}

