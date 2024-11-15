#include <bits/stdc++.h>
using namespace std;


int main()
{

    int n;
    cin>>n;

    vector<string>v(n);
    for(auto &x: v)     cin>>x;

    cout<<"NO"<<endl;

    for(int i=1; i<n;i++)
    {
        for(int j=0;j<i; j++)
        {
            if(v[i] == v[j])
            {
                cout<<"YES"<<endl;
                break;
            }
            else if(j== i-1 && v[i] != v[j])     cout<<"NO"<<endl;
        }
    }
    

    return 0;
}