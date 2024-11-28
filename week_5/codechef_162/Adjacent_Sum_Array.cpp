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
        int n;
        cin>>n;
        vector<int> a(n);
        vector<int> b(n-1);
        for(int i=0; i<n-1; i++)    cin>>b[i];

        sort(b.begin(), b.end());

        a[0] = b[0]/2;

        for(int i=0; i<n-1; i++)
        {
            a[i+1] = b[i] - a[i];
        }



        for(auto &x: a)
        {
            cout<< x<<" ";
        }
        cout<<endl;
    }   

    return 0;
}