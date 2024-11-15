#include <bits/stdc++.h>
using namespace std;


int main()
{
    string s;
    cin>>s;

    vector<int> v(26,0);

    for(auto x : s)
    {
        v[x - 'a']++;
    }

    for(int i =0 ; i<26; i++)
    {
        //cout<<i<<endl;
        if(! v[i])  
        {
            cout<< static_cast<char>(i+'a')<<endl;
            return 0;
        }
    }
    cout<<"None"<<endl;    

    return 0;
}