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
        int n, k;
        cin>>n>>k;

        string str;
        cin>>str;

        int x = count(str.begin(),str.end(), '1');

        auto f = find(str.rbegin(),str.rend(), '1');

        int fx =  str.rend() - f;

        cout<< min(fx, x + k)<<endl;
    }

    return 0;
}

