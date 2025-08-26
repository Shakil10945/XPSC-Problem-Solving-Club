#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;  cin>>n;
    deque<int> dq(n);

    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        dq.push_back(x);

        cin>>dq[i];
    }

    sort(dq.begin(), dq.end());

    for(auto value: dq)
        cout<<value<<" ";
    cout<<endl;

    dq.push_back(8);
    dq.push_front(77);

    dq.push_back(77);
    dq.push_back(44);

    for(auto x: dq)
        cout<<x<<" ";

    cout<<endl;
    cout<<dq.front()<<" "<<dq.back()<<endl;


    return 0;
}


//push_back(), pop_back(), back();
//push_front(), pop_front(), front();


