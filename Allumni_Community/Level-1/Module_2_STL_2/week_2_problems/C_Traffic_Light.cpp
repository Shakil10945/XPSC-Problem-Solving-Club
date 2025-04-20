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
        int n;  cin>>n;
        char c; cin>>c;

        string str;
        cin>>str;
        if(n==1 || c=='g')
        {
            cout<<0<<endl;  continue;
        }

        vector<int>non_find;
        vector<int>findd;

        for(int i=0; i<str.size(); i++)
        {
            if(str[i] == c)
                findd.push_back(i);
            if(str[i] == 'g')
                non_find.push_back(i);

            //cout<<"Hell"<<endl;
        }

        vector<int>diff;

        for(int i=0; i<findd.size(); i++)
        {
            if(findd[i] < non_find.back())
            {
                auto id = lower_bound(non_find.begin(),non_find.end(),findd[i]);
                if(id !=non_find.end())
                    diff.push_back(*id - findd[i]);
            }
            else
            {
                diff.push_back((n- findd[i])+non_find[0]);
            }
        }

        sort(diff.begin(),diff.end());

        cout<<diff.back()<<endl;

    }

    return 0;
}

