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

        string str;
        cin>> str;

        cout<< (adjacent_find(str.begin(), str.end()) != str.end() ? 1 : str.size())<<endl;
    }   

    return 0;
}

//cout << (adjacent_find(str.begin(), str.end()) != str.end() ? 1 : str.size()) << endl;