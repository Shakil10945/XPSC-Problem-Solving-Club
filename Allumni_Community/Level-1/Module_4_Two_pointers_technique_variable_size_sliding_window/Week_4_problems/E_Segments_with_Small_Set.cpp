#include <bits/stdc++.h>
using namespace std;
int n,k;
vector<int> vec;
void input()
{
    cin >> n>>k;
    vec.resize(n);

    for (int i = 0; i < n; i++)
        cin >> vec[i];
    
}

void solve()
{
    input();

    if(k==0)
    {
        cout<<0<<endl;
        return;
    }

    int l=0, r=0;
    long long ans =0;
    map<int, int>myset;

    while (r<n)
    {
        myset[vec[r]]++;
        while(myset.size()>k)
        {
            myset[vec[l]]--;
            if(!myset[vec[l]])
                myset.erase(vec[l]);
            l++;
        }
        ans += (r-l+1);
        r++;
    }
    cout<<ans<<endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n,k;    cin>>n>>k;
//     vector<int>ar(n);
//     for(int i=0; i<n; i++)  cin>>ar[i];

//     map<int, int> my_map;
//     long long sub_array = 0;
//     int l=0;
//     int  r=0;
//     if(k==0)
//     {
//         cout<<0<<endl;
//         return 0;
//     }
//     while (r<n)
//     {
//         my_map[ar[r]]++;

//         while(my_map.size()>k)
//         {
//             my_map[ar[l]]--;
//             if(my_map[ar[l]] ==0)
//                 my_map.erase(ar[l]);
//             l++;
//         }

//         sub_array += r-l+1;
//         r++;
//     }
//     cout<<sub_array<<endl;    

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n,k;    cin>>n>>k;
//     vector<int>ar(n);
//     for(int i=0; i<n; i++)  cin>>ar[i];

//     map<int, int> my_map;
//     long long sub_array = 0;
//     int l=0;
//     int  r=0;
//     while (r<n)
//     {
//         my_map[ar[r]]++;    
//         if(my_map.size() <= k)
//             sub_array += r-l+1;        
//         else
//         {
//             while (my_map.size() > k)
//             {
//                 my_map[ar[l]]--;
//                 if(my_map[ar[l]] == 0)
//                     my_map.erase(ar[l]);
//                 l++;
//             }
//             sub_array += r-l+1;     
//         }        
//         r++;
//     }
//     cout<<sub_array<<endl;    

//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int n, k;
// vector<int> vec;

// void input()
// {
//     cin >> n>>k;
//     vec.resize(n);

//     for (int i = 0; i < n; i++)
//         cin >> vec[i];
    
// }

// void solve()
// {
//     input();

//     if(k==0)
//     {
//         cout<<0<<endl;
//         return;
//     }

//     int l=0, r=0;
//     long long ans =0;
//     multiset<int>myset;
//     while (r<n)
//     {
//         myset.insert(vec[r]);
//         while(myset.size()>k)
//         {
//             myset.erase(vec[l++]);
//         }
//         ans += (r-l+1);
//         r++;
//     }
//     cout<<ans<<endl;
// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//         solve();

//     return 0;
// }