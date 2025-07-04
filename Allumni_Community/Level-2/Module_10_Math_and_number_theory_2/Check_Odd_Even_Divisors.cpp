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
        int odd, even;
        cin>>odd>>even;

        if(!odd)
        {
            cout<<"No"<<endl;
        }
        else if(even%odd == 0)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
           cout<<"No"<<endl;
        }
            //cout<<"Yes"<<endl;
    }

    return 0;
}

