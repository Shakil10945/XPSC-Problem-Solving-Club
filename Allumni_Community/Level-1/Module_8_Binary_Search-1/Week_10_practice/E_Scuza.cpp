// #include <bits/stdc++.h>
// using namespace std;

// int n,q;
// vector<int> vec;

// void input()
// {
//     cin >> n>>q;
//     vec.resize(n);

//     for (int i = 0; i < n; i++)
//         cin >> vec[i];
    
// }

// void solve()
// {
//     input();

//     vector<int>highest_stair(n);
//     set<int>mset;
//     for(int i=0; i<n;i++)
//     {
//         mset.insert(vec[i]);
//         highest_stair[i] = *mset.rbegin();
//     }
//     vector<long long>prefix_sum(n);
//     prefix_sum[0] = vec[0];
//     for(int i=1; i<n; i++)
//         prefix_sum[i] = (prefix_sum[i-1]+vec[i]);

//     while (q--)
//     {
//         int key; cin>>key;
//         int l=0, r =n-1, mid;
//         int index = -1;

//         //cout<<"key "<<  key<<endl<<endl<<endl;

//         while(l<=r)
//         {
//             mid = (l+r)/2;

//             if(highest_stair[mid]<=key)
//             {
//                 l = mid+1;
//                 index = mid;
//             }
//             else
//                 r = mid-1;
//         }
//         //cout<<index<<endl;
//         if(index!=-1)
//             cout<<prefix_sum[index]<<" ";
//         else
//             cout<<0<<" ";


//     }
//     cout<<endl;
    
    
    
// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--)
//         solve();

//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    set<int>s ={1,2,2,3,4,4,8,9};

    cout<<*s.lower_bound(6)<<endl;
    cout<<*s.upper_bound(6)<<endl;

    return 0;
}

