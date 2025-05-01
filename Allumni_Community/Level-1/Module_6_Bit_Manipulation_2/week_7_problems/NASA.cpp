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
multiset<int> vec;
void input()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        vec.insert(x);
    }
}
void solve()
{
    input();
    long long ans = 0;
    for(auto i=vec.begin(); i!=vec.end();)
    {
        for(auto it = myset.begin(); it!=myset.end();it++)
        {
            int target= ((*i)^(*it));
            // if(*it == 0)
            // {
            //     ans+= (vec.count(target)-1);
            //     continue;
            // }
            ans+= vec.count(target);
        }
        vec.erase(i++);
    }
    cout<<ans<<endl;
    vec.clear();  
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


// #include <bits/stdc++.h>
// using namespace std;
// set<int> myset;
// void set_xor()
// {
//     for(int i=0;i<(1<<15); i++)
//     {
//         string str = to_string(i);
//         string strr = str;
//         reverse(strr.begin(), strr.end());

//         if(str == strr)
//         {
//             myset.insert(i);
//         }
//     }
// }


// int n;
// multiset<int> vec;

// void input()
// {
//     cin >> n;

//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin>>x;
//         vec.insert(x);
//     }
    
// }

// void solve()
// {
//     //set_xor();
//     input();
//     long long ans = 0;
//     for(auto i=vec.begin(); i!=vec.end();i++)
//     {
//         for(auto it = myset.begin(); it!=myset.end(); it++)
//         {
//             if(*it == 0)
//             {
//                 ans+= (vec.count(*i ^ *it)-1);
//                 continue;
//             }
//             ans+= vec.count(*i^*it);
//         }
//     }
//     cout<<ans<<endl;

//     //myset.clear();
//     vec.clear();
    
    
// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     set_xor();
//     int t;
//     cin >> t;
//     while (t--)
//         solve();

//     return 0;
// }