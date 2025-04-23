#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int r, c;   cin>>r>>c;
    cout<<(r-c>17? "RCB": "CSK")<<endl;

    return 0;
}

