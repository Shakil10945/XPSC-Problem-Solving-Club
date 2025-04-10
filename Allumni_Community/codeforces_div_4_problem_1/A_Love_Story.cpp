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
        string b;
        cin >> b;
        cout << inner_product(b.begin(), b.end(), "codeforces", 0, plus<int>(), not_equal_to<char>()) << endl;
    }

    return 0;
}

