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

        vector<string>vec;
        for(int i=0; i<n; i++)
        {
            string str;
            cin>>str;

            vec.push_back(str);
        }

        vector<int>x;
        for(int i=0; i<n; i++)
        {
            if(count(vec[i].begin(),vec[i].end(), '1'))
                x.push_back(count(vec[i].begin(),vec[i].end(), '1'));
        }
        sort(x.begin(),x.end());

        if(x[0]== x[x.size()-1])
            cout<<"SQUARE"<<endl;
        else
            cout<<"TRIANGLE"<<endl;
    }

    return 0;
}

