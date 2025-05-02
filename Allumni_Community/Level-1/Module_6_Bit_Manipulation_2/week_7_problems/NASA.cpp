//code 01
#include <bits/stdc++.h>
using namespace std;
set<int> myset;
void set_xor()
{
    for(int i=0;i<(1<<15); i++)
    {
        string str = to_string(i);
        string strr = str;
        reverse(strr.begin(), strr.end());

        if(str == strr)
        {
            myset.insert(i);
        }
    }
}
int n;
vector<int> vec;
unordered_map<int,int>mp;
void input()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        vec.push_back(x);
        mp[x]++;
    }
}
void solve()
{
    input();
    long long ans = 0;
    for(int i=0; i<n;i++)
    {
        for(auto it = myset.begin(); it!=myset.end();it++)
        {
            int target= ((*it)^(vec[i]));
            ans+= mp[target];
        }
        mp[vec[i]]--;
        if(mp[vec[i]] == 0)
        {
            mp.erase(vec[i]);
        }
    }
    cout<<ans<<endl;
    vec.clear();
    mp.clear();  
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    set_xor();
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}


//code 02

// #include<bits/stdc++.h>
// using namespace std;

// vector<int> allPali;
// void precompute()
// {
//     for(int i=0;i<(1<<15); i++)
//     {
//         string s = to_string(i);
//         string temp = s;
//         reverse(temp.begin(),temp.end());

//         if(temp == s)
//             allPali.push_back(i);
//     }
// }

// void solve()
// {
//     int n;
//     cin>>n;
//     vector<int>vec(n);
//     for(int i=0; i<n; i++)
//         cin>>vec[i];
    
//     unordered_map<int,int>freq;
//     long long count = 0;

//     for(auto ele: vec)
//     {
//         freq[ele]++;
//         for(auto pali: allPali)
//         {
//             int target = ele ^ pali;
//             count +=  freq[target];
//         }
//     }

//     cout<<count<<endl;
// }


// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     precompute();
//     int t;
//     cin>>t;
//     while(t--)
//         solve();
//     return 0;
// }