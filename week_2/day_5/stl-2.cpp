#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    map<int,int> mymap;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        //myset.insert(x);
        mymap[x]++;
    }
    cout<<mymap.size()<<endl;
    

    return 0;
}