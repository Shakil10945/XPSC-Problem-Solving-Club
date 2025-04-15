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
        int n;
        cin>>n;

        if(n< 1400)
        {
            cout<<"Division 4"<<endl;
            continue;
        }
        else if(n< 1600)
        {
            cout<<"Division 3"<<endl;
            continue;
        }
        else if(n< 1900)
        {
            cout<<"Division 2"<<endl;
            continue;
        }
        else
        {
            
            cout<<"Division 1"<<endl;
            continue;
        }
    }

    return 0;
}

