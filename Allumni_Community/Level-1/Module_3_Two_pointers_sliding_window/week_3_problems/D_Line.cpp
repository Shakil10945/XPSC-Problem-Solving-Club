#include <bits/stdc++.h>
using namespace std;

int n;
string vec;

void input()
{
    cin >> n;
    //vec.resize(n);

    cin>>vec;
    
}

void solve()
{
    input();
    
    multiset<int>myset;
    long long sum=0;
    for(int i=0; i<n; i++)
    {
        if(vec[i]=='L')     sum+=i;
        else if(vec[i] == 'R')  sum+=(n-i-1);

        if(i<((n+1)/2 ) && vec[i]== 'L')
        {
            //cout<<vec[i]<<endl;
            myset.insert((n-i-1) - i);
            //cout<<(n+1)/2<< " ";
        }
        else if(i>=((n+1)/2) && vec[i]=='R')
        {
            myset.insert(i - (n-i-1));
            //cout<<vec[i]<<endl<<endl;
            //cout<<(n+1)/2<< " ";
        }
    }
    //cout<<endl;


    for(int i=0; i<n;i++)
    {
        if(!myset.empty())
        {
            sum+= (*myset.rbegin());
            myset.erase(--myset.end());
        }

        cout<<sum<<" ";
    }
    cout<<endl;
    
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