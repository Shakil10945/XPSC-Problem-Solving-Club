#include <bits/stdc++.h>
using namespace std;

set<int>all_prime;
set<int>prime_multi;

void prime()
{
    for(int i=2; i<=1000; i++)
    {
        bool pr = true;
        for(int j=2; (j*j)<=i; j++)
        {
            if(i%j==0)  pr = false;
        }
        if(pr)  all_prime.insert(i);
    }
    for(auto x: all_prime)
    {
        for(int i=1; i<=500; i++)
        {
            if(x*i<=1000)   prime_multi.insert(x*i);
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    prime();
    string str;
    cin>>str;

    int n = str.size();
    deque<int>ans;
    for(auto x: prime_multi)
    {
        if(x<=n)
            ans.push_back(x);
    }

    map<char, int>mp;
    for(auto x: str)
        mp[x]++;

    
    bool ch = false;
    char check;
    for(auto x: mp)
    {
        if(x.second>=ans.size())
        {
            ch = true;
            check = x.first;
        }
    }
    if(!ch) cout<<"NO"<<endl;
    else    cout<<"YES"<<endl;




    return 0;
}

