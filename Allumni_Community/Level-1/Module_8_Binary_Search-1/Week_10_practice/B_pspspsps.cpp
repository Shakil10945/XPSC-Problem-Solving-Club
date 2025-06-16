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
        int n;  cin>>n;
        string str; cin>>str;

        if(str[0]=='s')     str[0]='.';
        if(str[n-1]=='p')     str[n-1]='.';
    
        bool p_found = false, s_found = false;

        for(auto x:str)
        {
            if(x=='p')  p_found = true;
            if(x=='s')  s_found = true;
        }

        cout<<(p_found && s_found? "NO": "YES")<<endl;
    }

    return 0;
}

