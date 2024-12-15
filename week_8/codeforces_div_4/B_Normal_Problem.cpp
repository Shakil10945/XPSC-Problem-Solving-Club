#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;  cin>>t;
    while (t--)
    {
        string a;
        cin>>a;
        for(int i=a.size()-1; i>=0; i--)
        {
            if(a[i] == 'p')
                cout<<'q';
            else if(a[i]=='q')
                cout<<'p';
            else
                cout<<a[i];
        }
        cout<<endl;
    }
    

    
    

    return 0;
}