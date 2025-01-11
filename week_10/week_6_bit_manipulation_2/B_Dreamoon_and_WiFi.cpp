#include <bits/stdc++.h>
using namespace std;

string str, strr;

void input()
{
    cin>>str>>strr;
}

void solve()
{
    input();

    int count_str = 0;
    int count_strr = 0;
    int count_undefined = 0;

    for(int i=0; i<str.size(); i++)
    {
        if(str[i] == '+')   count_str++;
        else                count_str--;

        if(strr[i] == '+')  count_strr++;
        else if(strr[i] == '-') count_strr--;
        else                    count_undefined++;
    }

    int diff = count_str - count_strr;

    int x = 0;

    for(int i=0; i<(1<<count_undefined); i++)
    {   int cc = 0;
        for(int j=0; j<count_undefined; j++)
        {
            if(i & (1<<j))  cc++;
            else            cc--;
        }
        if(cc == diff) x++;
    }
    double possibility = static_cast<double>  (x)/ ((1<<count_undefined));

    if(!count_undefined)
    {
        if(!diff)   cout<<1.000000000000<<endl;
        else        cout<<0.000000000000<<endl;
        return;
    }

    cout<<fixed<<setprecision(12)<<possibility<<endl;


    str.clear();
    strr.clear();
    
}

int main()
{
    ios::sync_with_stdio(false);    cin.tie(nullptr);
    int t=1;  //cin>>t;
    while(t--)  solve();

    return 0;
}
