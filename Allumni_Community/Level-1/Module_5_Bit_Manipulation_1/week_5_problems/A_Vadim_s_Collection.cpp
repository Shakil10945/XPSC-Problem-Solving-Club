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
        string s;
        cin>>s;

        multiset<int>myset;
        for(int i=0; i<10; i++)
        {
            myset.insert(stoi(s.substr(i,1)));
        }

    

        for(int i=1; i<=10;i++)
        {
            if(!myset.empty())
            {
                auto it = lower_bound(myset.begin(), myset.end(), (10-i));
                if(it != myset.end())
                {
                    s[i-1] = char('0' + *it);
                    myset.erase(it);
                }
            }
        }
        cout<<s<<endl;

    }

    return 0;
}

