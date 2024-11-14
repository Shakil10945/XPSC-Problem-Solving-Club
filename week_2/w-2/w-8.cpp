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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        multiset<int> my_set;
        long long int power = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == 0)
            {
                if(my_set.empty())     continue;
                //cout<<v[i]<<"    ->   ";
                power += *my_set.rbegin();
                my_set.erase(--my_set.end());
            }
            if(v[i] != 0)
            {
                my_set.insert(v[i]);
            }
        }
        cout << power << endl;
    }

    return 0;
}