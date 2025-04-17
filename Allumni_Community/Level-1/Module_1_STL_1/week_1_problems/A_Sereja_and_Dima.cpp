#include <bits/stdc++.h>
using namespace std;

int n;
deque<int> dq;

void input()
{
    cin >> n;
    dq.resize(n);
    

    for (int i = 0; i < n; i++)     cin>>dq[i];
    
}

void solve()
{
    input();

    int sreeja = 0, dima = 0;
    int x =1;
    while (!dq.empty())
    {
        if(x%2 == 1)    sreeja += max(dq.front(),dq.back());
        else            dima += max(dq.front(),dq.back());

        (dq.front() > dq.back())? dq.pop_front(): dq.pop_back();
        x++;
    }


    cout<< sreeja << " "<<dima<<endl;

    dq.clear();
    
    
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    //cin >> t;
    //while (t--)
    solve();

    return 0;
}