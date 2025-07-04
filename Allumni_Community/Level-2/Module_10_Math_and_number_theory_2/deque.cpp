#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    deque<int>dq(n);

    for(int i=0; i<n; i++)
    {
        cin>>dq[i];
    }

    for(auto value: dq)
        cout<<value<<" ";
    cout<<endl;

    dq.push_back(9);
    dq.pop_back();
    dq.push_front(88);
    dq.pop_front();

    return 0;
}

