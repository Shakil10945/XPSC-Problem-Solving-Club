#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;  cin>>t;
    while(t--)
    {
        int n;  cin >> n;
        vector<array<int,3>> ops;
        ops.reserve(2*n);

        for(int i =2;i <=n; i++)
            ops.push_back({i, 1,i});

        for(int i= 2;i <= n; i++)
            ops.push_back({i,i,n});

        cout <<ops.size() <<endl;
        for(auto &op : ops)
            cout<<op[0]<< " "<<op[1]<< " " <<op[2]<<endl;
    }
    return 0;
}

