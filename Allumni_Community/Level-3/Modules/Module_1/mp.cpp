#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    map<int, string> mp;
    mp.begin();
    mp.end();
    --mp.end();

    mp.insert({23 , "rayhan"});
    mp[23] = "rayhan";

    mp.erase(44);
    mp.find(44);
    mp.size();
    mp.empty();
    mp.clear();
    mp.lower_bound(x);
    mp.upper_bound(y);


    return 0;
}

