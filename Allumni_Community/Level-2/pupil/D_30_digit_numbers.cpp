#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string str;
    cin>>str;

    int x = 0;
    for(int i=0; i<30; i++)
    {
        if(str[i]!='0')
        {
            x =i;
            break;
        }
    }

    cout<<str.substr(x,x+10)<<endl;

    return 0;
}

