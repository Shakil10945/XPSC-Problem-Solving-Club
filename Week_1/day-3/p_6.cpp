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
        if(! v[i])  
        {
            cout<< static_cast<char>(v[i]+97)<<endl;
            return 0;
        }
    }
    cout<<"NONE"<<endl;    

    return 0;
}