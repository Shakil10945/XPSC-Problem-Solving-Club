#include <bits/stdc++.h>
using namespace std;

int n;
deque<int> dq;

void input()
{
    cin>>n;
    dq.resize(n);

    for(int i=0; i<n; i++)  cin>>dq[i];
}

void solve()
{
    input();

    int sreeja = 0, dima = 0;
    int w = 1;
    while (!dq.empty())
    {
        int  mx = max(*dq.begin(), *dq.rbegin());
        if(w%2 != 0)
        {
            sreeja+=mx;
        }
        else
        {
            dima+=mx;
        }

        if(*dq.begin() >= *dq.rbegin())
            dq.pop_front();
        else
            dq.pop_back();
        
        w++;
    }

    cout<<sreeja<<" "<<dima<<endl; 
    dq.clear();  
}

int main()
{
    ios::sync_with_stdio(false);    cin.tie(nullptr);
    //int t;  cin>>t;
    //while(t--)  
    solve();

    return 0;
}
