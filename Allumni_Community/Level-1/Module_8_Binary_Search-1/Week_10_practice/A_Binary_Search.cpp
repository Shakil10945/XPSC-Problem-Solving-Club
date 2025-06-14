#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<int> vec;

void input()
{
    cin >> n >>k;
    vec.resize(n);

    for (int i = 0; i < n; i++)
        cin >> vec[i];
    
}

void solve()
{
    input();

    while(k--)
    {
        int key;    cin>>key;

        int l=0, r=n-1, mid;
        bool found = false;
        while (l<=r)
        {
            mid = (l+r)/2;
            if(key == vec[mid])
            {
                cout<<"YES"<<endl;
                found = true;
                break;
            }
            if(key<vec[mid])
                r=mid-1;
            else
                l=mid+1;
        }
        if(!found)  cout<<"NO"<<endl;
        
    }
    
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    //int t;
    //cin >> t;
    //while (t--)
    solve();

    return 0;
}