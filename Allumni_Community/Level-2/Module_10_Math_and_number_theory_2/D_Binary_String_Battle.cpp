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

        string str; cin>>str;

        int one = count(str.begin(),str.end(), '1');
        if(one<=k)
        {
            cout<<"Alice"<<endl;
            continue;
        }

        int mid;
        (n%2==0? mid=(n/2)+1: mid=(n+1)/2);
        //mid++;

        if(mid<=k)
        {
            cout<<"Alice"<<endl;
        }
        else
            cout<<"Bob"<<endl;
    }

    return 0;
}

