#include <bits/stdc++.h>
using namespace std;

int n;
deque<int> vec;

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

    bool m = true;
    while (vec.size())
    {
        if(vec.front()> vec.back())
        {
            cout<<(m? "L": "R");

            (m? vec.pop_front(): vec.pop_back());
        }
        else
        {
            cout<<(m? "R":"L");
            (m? vec.pop_back(): vec.pop_front());
        }
            
        m = (m? false: true);
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