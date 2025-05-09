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

        map<char, int>mp;

        for(int i=0; i<n;i++)
            mp["aeiou"[i%5]]++;
        
        for(auto x: mp)
        {
            for(int i=0; i<x.second;i++)
                cout<<x.first;
        }
        cout<<endl;
    }

    return 0;
}

