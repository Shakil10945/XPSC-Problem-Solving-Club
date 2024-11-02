#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    cin.ignore();

    set<string> myset;
    for(int i=0;i<n; i++)
    {
        string s1;

        getline(cin, s1);
        myset.insert(s1);
    }    

    cout<< myset.size()<<endl;

    return 0;
}