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
        string str;
        cin>>str;
        bool check = false;
        for(int i=0; i<n/2; i++)
        {
            if(str[i] == str[n-i])
            {
                cout<< n-i<<endl;
                check = true;
                break;
            }
        }
        if(!check)        cout<<0<<endl;



    }

    return 0;
}

