#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t,x;
    cin >> t>>x;
    map<string, string>mymap;
    while (t--)
    {
        string str, strr;
        cin>>str>>strr;

        mymap[strr] = str;        
    }

    while(x--)
    {
        string str, strr;
        cin>>str>>strr;

        cout<<str<< " "<<strr<< " #"<<mymap[strr.substr(0,strr.size()-1)]<<endl;
    }

    return 0;
}

