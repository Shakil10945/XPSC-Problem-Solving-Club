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
    

        string str;
        cin>>str;

        int x= 0;
        for(int i=0; i<str.size();i++)
        {
            if(str[i]!='0') x=i;
        }
        int total_zero = count(str.begin(),str.end(),'0');
        int zero = count(str.begin()+x, str.end(), '0');

        cout<< str.size()-(total_zero-zero+1)<<endl;
    }

    return 0;
}

