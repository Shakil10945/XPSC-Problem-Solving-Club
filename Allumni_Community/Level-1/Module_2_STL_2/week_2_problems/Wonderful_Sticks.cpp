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
        int n;
        cin>>n;
        string str;
        cin>>str;
        
        set<int> myset;
        for(int i=1; i<=n;i++)
        {
            myset.insert(i);
        }
        vector<int>vec;
        for(int i=str.size()-1; i>=0;i--)
        {
            if(str[i] == '<')
            {
                vec.push_back(*myset.begin());
                myset.erase(*myset.begin());
            }
            else
            {
                vec.push_back(*myset.rbegin());
                myset.erase(--myset.end());
            }
        }
        
        
        vec.push_back(*myset.begin());
        reverse(vec.begin(),vec.end());
        for(auto x: vec)
            cout<<x<<" ";
        cout<<endl;
    }

    return 0;
}

