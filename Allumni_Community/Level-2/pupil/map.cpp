#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    map<int,int>mp;

    mp.begin();
    mp.end();
    --mp.end();
    mp.insert({4,88});
    mp[4]=88;
    mp.erase(66);
    mp.find(99);

    mp.size();
    mp.empty();
    mp.clear();
    mp.lower_bound(5);
    mp.upper_bound(99);

    return 0;
}

