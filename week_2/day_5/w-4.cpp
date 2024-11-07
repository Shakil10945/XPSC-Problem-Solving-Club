#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        map<char, int> my_map;
        map<char, int> my_map2;
        string ss = "Timur";
        if (n != 5)
        {
            cout << "NO" << endl;
            continue;
        }

        for (int i = 0; i < n; i++)
        {
            my_map[s[i]]++;
            my_map2[ss[i]]++;
        }

        if (my_map2 == my_map)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}