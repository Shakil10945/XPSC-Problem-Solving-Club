#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    string s;
    cin>>s;

    cout<<s<<endl;

    for(int i=1; i<=n; i++)
    {
        char c;
        cin>>c;
        s.push_back(c);
    }

    s.pop_back();
    s.front();
    s.clear();
    cout<<s.empty();

    string s;
    cin>>s;

    cout<<s.substr(1,4)<<endl;
    cout<<s.substr(5)<<endl;

    return 0;
}

