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
        for(int i=0, j=n-1; i<j; i++, j--)
        {
            if(str[i] == str[j])
            {
                cout<< j-i+1<<endl;
                check = true;
                break;
            }
        }
        if(!check)
        {
            if(n%2==0)   cout<<0<<endl;
            else        cout<<1<<endl;
        }



    }

    return 0;
}

