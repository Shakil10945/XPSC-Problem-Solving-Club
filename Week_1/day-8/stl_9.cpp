#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    set<string> myset;

    vector<string> vec(n);
    for (auto &x : vec)
    {
        cin >> x;
        myset.insert(x);
    }

    // cout << vec.size() << endl;

    for (int i = 0; i < n; i++)
    {
        if (!myset.empty())
        {
            auto it = myset.find(vec.back());

            if (it != myset.end())
            {
                myset.erase(it);
                cout << vec.back() << endl;
            }
        }

        vec.pop_back();
    }

    return 0;
}