#include <bits/stdc++.h>
using namespace std;

string str = "ADVITIYA";
string strr;

int n;
vector<int> vec;

void input()
{
    cin >> strr;
}

void solve()
{
    input();

    if(str == strr)
    {
        cout<<0<<endl;
        strr.clear();
        return;
    }

    int count = 0;
    for(int i=0; i<8; i++)
    {
        if(str[i] != strr[i])
        {
            if(str[i] > strr[i])
            {
                count+=(str[i] - strr[i]);
            }
            else
            {
                count+= 26 - (strr[i] - str[i]);
            }
        }
    }
    cout<<count<<endl;
    strr.clear();
        

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}