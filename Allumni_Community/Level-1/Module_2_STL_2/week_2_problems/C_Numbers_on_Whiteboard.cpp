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
        int n;
        cin >> n;
        multiset<int> myset;

        for (int i = 1; i <= n; i++)
            myset.insert(i);

        vector<pair<int, int>> ans;
        while (myset.size() >= 2)
        {
            auto it = myset.rbegin();       // Reverse iterator to the largest element
            auto it2 = next(it);           // Reverse iterator to the second largest element

            int a = *it;                   // Largest element
            int b = *it2;                  // Second largest element

            myset.erase(--myset.end());    // Erase the largest element
            myset.erase(--myset.end());    // Erase the second largest element

            myset.insert((a + b + 1) / 2); // Insert the ceiling of their average
            ans.push_back({a, b});
        }

        cout << *myset.begin() << endl;    // The last remaining number
        for (auto x : ans)
            cout << x.first << " " << x.second << endl;
    }

    return 0;
}