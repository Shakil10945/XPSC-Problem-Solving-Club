#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    priority_queue<int, vector<int>,greater<int>> pq;

    pq.push(66);
    pq.push(3);

    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;

    while(!pq.empty())
    {
        int value = pq.top();
        pq.pop();
        cout<<value<<endl;
    }

    return 0;
}

