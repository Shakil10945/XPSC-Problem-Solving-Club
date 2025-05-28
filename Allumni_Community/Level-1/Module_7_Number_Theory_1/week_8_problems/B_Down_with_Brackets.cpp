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

        int n = str.size();
        int r= 0;
        int open =0, close = 0;
        while(r<n)
        {

            while(r<n && (str[r]!=')'))
            {
                open++;
                r++;
            }
            while (r<n && (str[r]!='('))
            {
                r++;
                close++;
            }
            if(close == open)
            {
                break;
            }
        }
        if(r==n)
        {
            cout<<"NO"<<endl;
        }
        else
            cout<<"YES"<<endl;
        
    }

    return 0;
}

