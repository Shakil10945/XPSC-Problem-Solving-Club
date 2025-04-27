#include <bits/stdc++.h>
using namespace std;

int n,k;
vector<int> vec;

void input()
{
    cin >> n >> k;
    vec.resize(k);

    for (int i = 0; i < k; i++)
        cin >> vec[i];
    
}

void solve()
{
    input();

    deque<int>new_vec;

    for(int i=1;i<k; i++)
    {
        new_vec.push_back(vec[i]-vec[i-1]);
    }
    if(!is_sorted(new_vec.begin(), new_vec.end()))
    {
        cout<<"No"<<endl;
        return;
    }
    if(k==n)    new_vec.push_front(vec[0]);
    if(k<n)
    {
        if(vec[0]==0)
            new_vec.push_front(vec[0]);
        else if(vec[0]>0)
        {
            new_vec.push_front((vec[0]+(n-k))/(n-k+1));
        }
        else
        new_vec.push_front((vec[0])/(n-k+1));

    }

    if(is_sorted(new_vec.begin(),new_vec.end()))    cout<<"Yes"<<endl;
    else    cout<<"No"<<endl;

    
    
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}