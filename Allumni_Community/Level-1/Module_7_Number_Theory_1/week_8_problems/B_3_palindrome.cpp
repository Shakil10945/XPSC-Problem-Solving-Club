#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;  cin>>n;

    for(int i=0; i<(n%3); i++)
        cout<<"a";
    n-=(n%3);
    vector<string>vec ={"bba", "abb", "aab", "baa"};
    int x =0;
    for(int i=0; i<n; i+=3)
    {
        cout<<vec[x];
        x++;
        if(x==4)    x=0;
    }
    cout<<endl;

    return 0;
}

