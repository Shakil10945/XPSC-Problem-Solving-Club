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
        int n;  cin>>n;
        string str;
        cin>>str;

        cout<<(count(str.begin(), str.end(),'B')? (str.rfind('B') - str.find('B') + 1) : 0)<<endl;
    }

    return 0;
}

