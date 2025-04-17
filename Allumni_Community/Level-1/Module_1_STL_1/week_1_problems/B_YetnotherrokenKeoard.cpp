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
        vector<int> vec;
        vector<int> upp, loww;
        for(int i=0;i<str.size(); i++)
        {
            if(isupper(str[i]) && str[i] != 'B') upp.push_back(i);
            if(islower(str[i]) && str[i] != 'b') loww.push_back(i);

            if(str[i] == 'B' && !upp.empty())   upp.pop_back();
            if(str[i] == 'b' && !loww.empty())   loww.pop_back();
        }
        vec.insert(vec.end(),upp.begin(),upp.end());
        vec.insert(vec.end(),loww.begin(),loww.end());

        sort(vec.begin(),vec.end());
        //cout<<vec.size()<<endl;

        for(int i=0; i<vec.size(); i++)
        {
            cout<<str[vec[i]];
        }
        cout<<endl;
    }

    return 0;
}

