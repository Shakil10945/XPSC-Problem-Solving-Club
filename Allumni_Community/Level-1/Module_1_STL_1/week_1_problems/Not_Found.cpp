#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string str;
    cin>>str;

    vector<int>vec(26,0);

    for(int i=0;i<str.size(); i++)
    {
        vec[str[i] - 'a']++;
    }

    bool ch = false;
    for(int i=0; i<26;i++)
    {
        if(vec[i] == 0)
        {
            cout<<char(i + 'a')<<endl;
            ch = true;
            break;
        }
    }
    if(!ch) cout<<"None"<<endl;

    return 0;
}

