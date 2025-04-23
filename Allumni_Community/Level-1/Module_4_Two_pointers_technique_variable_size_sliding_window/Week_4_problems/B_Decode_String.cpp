#include <bits/stdc++.h>
using namespace std;

int n;
string str;

void input()
{
    cin >> n;
    cin>>str;
}

void solve()
{
    input();

    //int ten = count(str.begin(),str.end(), "00");

    int zero = count(str.begin(), str.end(), '0');


    string result = "";
    int i=n-1;
    while(i>=0)
    {
        if(str[i] == '0')
        {
            int num = stoi(str.substr(i-2,2));
            char ch = num-1+'a';
            result+=ch;
            i-=3;
        }
        else
        {
            int num = stoi(str.substr(i,1));
            char ch = num-1+'a';
            result += ch;
            i--;
        }
    }
    reverse(result.begin(),result.end());
    cout<<result<<endl;


    
    
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