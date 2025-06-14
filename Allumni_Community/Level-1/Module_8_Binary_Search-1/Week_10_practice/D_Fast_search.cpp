#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> vec;

void input()
{
    cin >> n;
    vec.resize(n);

    for (int i = 0; i < n; i++)
        cin >> vec[i];
    
}

void solve()
{
    input();
    int q;  cin>>q;
    sort(vec.begin(),vec.end());
    
    while(q--)
    {
        int left, right;    cin>>left>> right;
        int left_index=-1, right_index=-1;

        //cout<<left<<" "<<right<<" HI"<<endl;

        int l=0, r= n-1, mid;


        while(l<=r)
        {
            mid = (l+r)/2;
            if(left <= vec[mid])
            {
                left_index = mid;
                r=mid-1;
                //cout<<"Dk"<<endl;
            }
            else
                l = mid+1;
        }
        l=0, r= n-1, mid;
        while(l<=r)
        {
            mid = (l+r)/2;
            if(right >= vec[mid])
            {
                right_index = mid;
                l=mid+1;
                //cout<<"D"<<endl;
            }
            else
                r = mid-1;
        }
        if(right_index<left_index || (left_index==-1 || right_index==-1))     cout<<0<<endl;
        else
            cout<<right_index - left_index + 1<<" ";
        //cout<<right_index-left_index<<" ";
    }
    cout<<endl;
    
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();

    return 0;
}