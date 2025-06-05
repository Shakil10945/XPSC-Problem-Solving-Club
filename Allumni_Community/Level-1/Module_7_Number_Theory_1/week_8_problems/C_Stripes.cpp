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
        vector<string>vec;
        for(int i=0; i<8;i++)
        {
            string str;
            cin>>str;
            vec.push_back(str);
        }
        bool check = false;
        for(int i=0; i<8; i++)
        {
            if(vec[i][0]=='R')
            {
                int count = 0;
                for(int j=0; j<8; j++)
                {
                    if(vec[i][j]=='R')  count++;
                }
                if(count==8)
                {
                    cout<<'R'<<endl;
                    check = true;
                    break;
                }
            }
        }
        if(!check)  cout<<'B'<<endl;
    }

    return 0;
}

