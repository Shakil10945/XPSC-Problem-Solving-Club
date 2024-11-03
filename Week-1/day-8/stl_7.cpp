#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;

    map<string, int>mymap;

    for(int i=0;i<n;i++)
    {
        string st;
        cin>>st;

        mymap[st]++;

        if(mymap[st] == 1)      cout<<"OK"<<endl;
        else if(mymap[st]>1)
        {
            cout<<st<<mymap[st]-1<<endl;
        }

    }
    

    return 0;
}