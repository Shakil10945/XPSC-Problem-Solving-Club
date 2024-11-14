#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        deque<int> dq;
        set<int> my_set;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            dq.push_back(x);
            my_set.insert(x);
        }

        int first = 1;
        int last = n;

        while (!dq.empty() && 
        (dq.front() == *my_set.begin() || 
        dq.front() == *my_set.rbegin() || 
        dq.back() == *my_set.begin() || 
        dq.back() == *my_set.rbegin()))
        {
            
            if (dq.front() == *my_set.begin() || dq.front() == *my_set.rbegin())
            {
                if(!my_set.empty())
                    my_set.erase(my_set.find(dq.front()));
                if(!dq.empty())
                    dq.pop_front();
                first++;
            }
            if(!dq.empty() && !my_set.empty())
            {
                if (dq.back() == *my_set.begin() || dq.back() == *my_set.rbegin())
                {
                    if(!my_set.empty())
                        my_set.erase(my_set.find(dq.back()));
                    if(!dq.empty())
                        dq.pop_back();
                    last--;
                }

            }
            
        }
        if (dq.size() < 2)
            cout << -1 << endl;
        else
        {
            cout << first << " " << last << endl;
        }
    }

    return 0;
}