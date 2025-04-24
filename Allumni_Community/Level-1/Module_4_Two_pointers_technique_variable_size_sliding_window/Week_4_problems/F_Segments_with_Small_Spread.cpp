#include <bits/stdc++.h>
using namespace std;

int n;
long long k;
vector<long long> vec;

void input()
{
    cin >> n>> k;
    vec.resize(n);

    for (int i = 0; i < n; i++)
        cin >> vec[i];
    
}

void solve()
{
    input();

    int l=0, r=0;
    long long ans =0;
    multiset<long long>myset;
    while (r<n)
    {
        myset.insert(vec[r]);
        
        while (*myset.rbegin() - *myset.begin()>k)
        {
            myset.erase(myset.find(vec[l])); 
            l++;
        }
        
        ans += r-l+1;
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

//     int n; long long k;
//     cin>>n>>k;
//     vector<long long> ar(n);
//     for(int i=0; i<n; i++)  cin>>ar[i];

//     int l=0, r=0;
//     long long sub_size = 0;
//     multiset<long long> my_set;
//     long long sub_dif = 0;

//     while (r<n)
//     {
//         my_set.insert(ar[r]);
//         while (*my_set.rbegin() - *my_set.begin() >k)
//         {
//             my_set.erase(my_set.find(ar[l]));
//             l++;
//         }
            
//         sub_size += r-l+1;            
//         r++;
//     }
//     cout<<sub_size<<endl;   
    

//     return 0;
// }