
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin>>s;
        string r = s;
        sort(r.begin(),r.end());

        if(r==s)
        {
            if(all_of(s.begin(), s.end(), [&](char c) {return c == s[0];}))
                cout<<"NO"<<endl;
            else
            {
                next_permutation(r.begin(), r.end());
                cout<<"YES"<<endl<< r<<endl;
            }
        }
        else
        {
            cout<<"YES"<<endl<< r<<endl;
        }
    }

    return 0;
}

