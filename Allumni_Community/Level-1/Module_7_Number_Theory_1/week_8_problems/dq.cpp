#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;  cin>>n;
    deque<int>dq(n);
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        dq.push_back(x);
        cin>>dq[i];
    }

    sort(dq.begin(),dq.end());

    for(auto value: dq)
        cout<<value<<" ";
    cout<<endl;

    dq.push_back(66);
    dq.push_back(66);
    dq.push_back(66);
    dq.push_back(66);

    dq.pop_back();
    dq.pop_back();
    dq.pop_back();

    for(auto value: dq)
        cout<<value<<" ";
    cout<<endl;
    cout<<dq.front()<<" "<<dq.back()<<endl;

    dq.push_back(88), dq.pop_back(), dq.back();
    dq.push_front(00), dq.pop_front(), dq.front();
    return 0;
}

