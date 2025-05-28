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
        int n,k;    cin>>n>>k;
        string str; cin>>str;

        int one = count(str.begin(),str.end(),'1');
        int zero = count(str.begin(),str.end(),'0');

        int half = n/2;

        if(!one)
        {
            if(zero == 2*k)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else if(!zero)
        {
            if(one == 2*k)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else
        {
            if(str=="01" || str == "10")
            {
                cout<<"NO"<<endl;
                continue;
            }
            if(max(one, zero)>half && ((max(one,zero) - half) %2 != (k%2)))
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;

        }

    }

    return 0;
}

