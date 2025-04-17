#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    map<string,int>mymap;

    while (t--)
    {
        string str;
        cin>>str;

        if(mymap.count(str))
        {
            cout<<str<<mymap[str]<<endl;
            mymap[str]++;
            continue;
        }
        cout<<"OK"<<endl;
        mymap[str]++;
        
    }

    return 0;
}

