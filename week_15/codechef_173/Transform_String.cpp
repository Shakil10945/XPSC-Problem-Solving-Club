#include <bits/stdc++.h>
using namespace std;

string a,b;

void input()
{
    cin>>a>>b;
}

void solve()
{
    input();
    map<char, int> aa;
    map<char, int> bb;

    for(int i=0; i<a.size(); i++)
        aa[a[i]]++;
    for(int i=0; i<b.size(); i++)
        bb[b[i]]++;

    
    

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