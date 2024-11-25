#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        string s, k;
        cin>> s>>k;

        long long less_move = INT_MAX;

        long long move = 0;

        int l=0;
        while(l<=n-m)
        {
            for(int i=0; i<m; i++)
            {
                int x = stoi(string(1, s[l+i]));
                int y = stoi(string(1, k[i]));

                if(abs(x-y) > 5)
                    move+= 10 - abs(x-y);
                else
                    move+= abs(x-y);
            }
            less_move = min(move, less_move);
            move =0;
            l++;
        }
        
        cout<<less_move<<endl;
    }
    return 0;
}