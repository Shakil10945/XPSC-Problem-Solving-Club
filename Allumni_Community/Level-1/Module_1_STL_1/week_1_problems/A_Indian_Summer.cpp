#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    set<string> myset;
    while (t--)
    {
        string str, strr;
        cin>> str >> strr;
        myset.insert(str+ " " +strr); 
    }

    cout<<myset.size()<<endl;
    myset.clear();

    return 0;
}

