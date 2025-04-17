#include <bits/stdc++.h>
using namespace std;

int n;
vector<vector<string>> vec;

void input()
{
    cin >> n;
    vec.resize(3);

    for(int i=0;i<3; i++)
    {
        vector<string> vec2(n);
        for(int j=0; j<n; j++)
            cin>>vec2[j];
        vec[i] = (vec2);
    }
}

void solve()
{
    input();

    map<string,int> mymap;

    for(int i=0;i<3; i++)
    {
        for(int j=0; j<n; j++)
            mymap[vec[i][j]]++;
    }
    int a =0, b=0, c=0;
    for(int i=0;i<3; i++)
    {
        for(int j=0; j<n; j++)
        {
            int x = mymap[vec[i][j]];
            int k=0;
            ((mymap[vec[i][j]] ==1)? k+= 3 : (mymap[vec[i][j]] ==2)? k+= 1: 0) ;
            if(i==0)
                a+=k;
            else if (i==1)
                b+=k;
            else    c+=k;
        }
    }
    cout<<a<<" "<<b<<" "<<c<<endl; 
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}