#include <bits/stdc++.h>
using namespace std;

int n;
deque<int> vec;
multiset<int>myset;


void input()
{
    cin >> n;
    vec.resize(n);

    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
        myset.insert(vec[i]);
    }
    
}

void solve()
{
    input();
    bool left = false, rigt = false;
    int l = 1, r = n;
    while (!vec.empty() && l<r ) 
    {
        if(vec.front() == *myset.begin() || vec.front() == *myset.rbegin())
        {
            myset.erase(vec[0]);
            vec.pop_front();
            l++;
        }
        if(!vec.empty() && (vec.back() == *myset.begin() || vec.back() == *myset.rbegin()))
        {
            myset.erase(vec.back());
            vec.pop_back();
            r--;

        }
        if( !vec.empty() && !(vec.front() == *myset.begin() || vec.front() == *myset.rbegin()) && !(vec.back() == *myset.begin() || vec.back() == *myset.rbegin()))
        {
            break;
        }

    }

    if(l<r)
        cout<<l<<" "<<r<<endl;
    else
        cout<<-1<<endl;
    
    
    myset.clear();
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}