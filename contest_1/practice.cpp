#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;

        string a,b;
        cin>>a;
        cin>>b;

        vector<int> v1(2,0);
        vector<int> v2(2,0);

        int count = 0;

        for(int i=0; i<n;i++)
        {
            v1[a[i]- '0'];
            v2[b[i]-'0'];

            if(a[i] != b[i])    count++;
        }

        if(v1[0] == v2[0] && v1[1]==v2[1])
        {
            if(count== k)   cout<<"YES"<<endl;
            else    cout<<"NO"<<endl;
        }
        else    cout<<"NO"<<endl;

    }
    
    

    return 0;
}