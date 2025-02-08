#include <bits/stdc++.h>
using namespace std;


set<string>my_set;

void input()
{
    int n;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        string str, strr;
        cin>>str>>strr;
        str += " ";
        str += strr;
        my_set.insert(str);
    }  
}

void solve()
{
    input();

    cout<<my_set.size()<<endl;

    my_set.clear();    
}

int main()
{
    ios::sync_with_stdio(false);    cin.tie(nullptr);
    //int t;  cin>>t;
    //while(t--)  
    solve();

    return 0;
}
