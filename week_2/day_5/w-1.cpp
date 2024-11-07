#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n, x;
    cin>>n>>x;

    vector<int> v;
    for(int i=0; i<n; i++)
    {
        int m;
        cin>>m;

        if(m!=x)        v.push_back(m);
    }

    for(auto &l : v)
        cout<< l<<" ";
    cout<<endl;


    return 0;
}