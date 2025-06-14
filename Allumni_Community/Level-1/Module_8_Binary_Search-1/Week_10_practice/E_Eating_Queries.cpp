// #include <bits/stdc++.h>
// using namespace std;

// int n, q;
// vector<int> vec;

// void input()
// {
//     cin >> n >> q;
//     vec.resize(n);

//     for (int i = 0; i < n; i++)
//         cin >> vec[i];
    
// }

// void solve()
// {
//     input();

//     vector<long long> prefixsum(n);
//     sort(vec.begin(),vec.end());
//     reverse(vec.begin(),vec.end());
//     prefixsum[0]= vec[0];
//     for(int i=1; i<n; i++)
//         prefixsum[i] = (prefixsum[i-1]+(vec[i]*1LL));

    
    
    
    
//     while (q--)
//     {
//         int key, l=0,r=n-1, mid;
//         cin>>key;
//         int ans = -1;
//         while (l<=r)
//         {
//             mid = (l+r)/2;

//             if(prefixsum[mid]<key)
//                 l = mid+1;
//             else
//             {
//                 r=mid-1;
//                 ans = mid+1;
//             }
//         }
//         cout<<ans<<endl;
        
//     }
    
    
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

    int t;
    cin >> t;
    while (t--)
    {
        string str,str2;
        cin>>str>>str2;

        int l=0, r=0, size = str.size();

        while (r<size)
        {
            while(l<str2.size() && r<size && str2[l]!=str[r])
            {
                cout<<str[r];
                r++;
                
            }
            string s = "";
            int temp_r = r;
            while(temp_r<size && l< str2.size() && str[temp_r]==str2[l])
            {
                s+=str[temp_r];
                temp_r++, l++;
            }
            if(s== str2)
            {
                cout<<'#';
                r  = temp_r;
                l=0;
                s = "";
            }
            else
            {
                cout<<str[r];
                r++;
                l=0;
            }

        }
        cout<<endl;
        
    }

    return 0;
}

