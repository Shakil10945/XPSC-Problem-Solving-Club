#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios:::sync_with_stdio(falsse);
    cin.tie(nullptr);

    int n;
    cin>>n;
    deque<int>dq(n);

    for(int i=0; i<n;i++)
    {
        cin>>dq[i];
    }

    sort(dq.begin(),dq.end());

    for(auto value: dq)
        cout<<value<<" ";

    dq.push_front(2);
    dq.push_back(4);
    dq.pop_back();
    dq.pop_front();

    for(auto value: dq)
    {
        cout<<value<<" ";
    }

    cout<<endl;

    cout<<dq.front()<<" "<< dq.back()<<endl;


    return 0;
}