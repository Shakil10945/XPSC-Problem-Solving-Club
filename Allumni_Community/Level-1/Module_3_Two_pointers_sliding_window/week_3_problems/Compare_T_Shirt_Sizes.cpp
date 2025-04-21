#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        string a, b;    cin>>a>>b;

        if(a==b)
        {
            cout<<"="<<endl;    continue;
        }
        if(a == "M" || b== "M")
        {
            if(count(a.begin(),a.end(),'S') || count(b.begin(),b.end(),'L'))
                cout<<"<"<<endl;
            else    cout<<">"<<endl;
        }
        else if(count(a.begin(), a.end(), 'S') || count(b.begin(),b.end(), 'S'))
        {
            if(count(a.begin(), a.end(), 'S') && count(b.begin(),b.end(), 'S'))
            {
                if(count(a.begin(), a.end(), 'X') < count(b.begin(),b.end(), 'X'))
                    cout<<">"<<endl;
                else
                    cout<<"<"<<endl;
            }
            else
            {
                if(count(a.begin(),a.end(), 'S'))
                    cout<<"<"<<endl;
                else    cout<<">"<<endl;
            }
        }
        else
        {
            if(count(a.begin(),a.end(),'X') > count(b.begin(),b.end(), 'X'))
                cout<<">"<<endl;
            else    cout<<"<"<<endl;
        }
    }

    return 0;
}

