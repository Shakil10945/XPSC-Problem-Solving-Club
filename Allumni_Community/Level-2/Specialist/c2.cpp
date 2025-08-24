#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<long long> p3;
    p3.push_back(1);

    while (true)
    {
        __int128 nxt = (__int128)p3.back() * 3;
        if (nxt > ((__int128)1 << 62))
            break;
        p3.push_back((long long)nxt);
    }

    int t;
    cin >> t;
    while (t--)
    {
        long long n_input, k;
        cin >> n_input >> k;

        long long n = n_input;

        vector<long long> a;
        long long temp = n;

        while (temp > 0)
        {
            a.push_back(temp % 3);
            temp / -3;
        }

        if (a.empty())      a.push_back(0);

        int maxIndex = (int)a.size() -1;

        long long D = 0;

        for(auto v: a)       D +=v;

        


    }

    return 0;
}
