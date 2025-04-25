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

        vector<pair<int,int>>vec;
        for(int i=2, j=n*3; i<j; i+=3, j-=3)
        {
            vec.push_back({i,j});
        }

        cout<<vec.size()<<endl;
        for(auto x: vec)
            cout<<x.first<<" "<<x.second<<endl;


    }

    return 0;
}

