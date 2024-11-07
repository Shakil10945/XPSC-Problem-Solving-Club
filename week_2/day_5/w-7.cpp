#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        //cout<<k<<endl;
        multiset<char> myset;
        set<char> set;
        for (int i = 0; i < n; i++)
        {
            char c;
            cin >> c;
            myset.insert(c);
            set.insert(c);
        }

        int odd = 0;

        for (auto &element : set)
        {
            if (myset.count(element) % 2 != 0)
                odd++;
        }

        //cout << odd << " " << k << " ";

        if (odd == 1 && k % 2 == 0)
            cout << "YES" << endl;
        else if (odd >= k)
        {
            if ((odd - k) == 1 || (odd - k) == 0)
                cout << "YES" << endl;

            else
                cout << "NO" << endl;
        }
        else if (odd < k)
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}