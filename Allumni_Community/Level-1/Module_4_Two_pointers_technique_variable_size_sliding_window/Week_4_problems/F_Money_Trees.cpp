#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<int> vec;
vector<int> vec2;

void input()
{
    cin >> n>>k;
    vec.resize(n);
    vec2.resize(n);

    for (int i = 0; i < n; i++)
        cin >> vec[i];
    for (int i = 0; i < n; i++)
        cin >> vec2[i];
    
}
void solve()
{
    input();
    int l=0, r=0;
    int sum =0, ans =0;
    while(r<n)
    {
        if(r==l || vec2[r-1]% vec2[r]==0)
        {
            sum+=vec[r];

            while (sum>k)
                sum -= vec[l++];
            ans = max(ans, r-l+1);
        }
        else
        {
            l=r;
            sum = vec[r];
        }
        r++;
    }
    cout<<ans<<endl;
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
// void solve()
// {
//     input();
//     if(k< *min(vec.begin(), vec.end()) || n==1)
//     {
//         cout<<0<<endl;
//         return;

//     }


//     int l=0, r=1; 
//     int sum = vec[0];
//     int ans =0;
//     while(r<n)
//     {
//         if(vec2[r-1] % vec2[r] == 0)
//         {
//             //cout<<"r "<<r<<" l "<<l<<endl; 
//             sum+=vec[r];
//             while (sum>k)
//                 sum-=vec[l++];

//             ans = max(ans, r-l+1);
//         }
//         else
//         {
//             sum = vec[r];
//             l=r;
//         }
//         r++;

//     }
//     cout<<ans<<endl;
    
    
// }

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


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> f(n);
        vector<int> h(n);

        for (int i = 0; i < n; i++) cin >> f[i];
        for (int i = 0; i < n; i++) cin >> h[i];

        int l = 0, r = 0, len = 0;
        long long temp_sum = 0;

        while (r < n) {
            temp_sum += f[r];

            if (r > 0 && h[r - 1] % h[r] != 0) {
                l = r;
                temp_sum = f[r];
            }

            while (temp_sum > k) {
                temp_sum -= f[l];
                l++;
            }
            len = max(len, r - l + 1);

            r++;
        }

        cout << len << endl;
    }
    return 0;
}

// void solve()
// {
//     input();
//     if(k< *min(vec.begin(), vec.end()) || n==1)
//     {
//         cout<<0<<endl;
//         return;

//     }


//     int l=0, r=1; 
//     int sum = vec[0];
//     int ans =0;
//     while(r<n)
//     {
//         if(vec2[r-1] % vec2[r] == 0)
//         {
//             //cout<<"r "<<r<<" l "<<l<<endl; 
//             sum+=vec[r];
//             while (sum>k)
//                 sum-=vec[l++];

//             ans = max(ans, r-l+1);
//         }
//         else
//         {
//             sum = vec[r];
//             l=r;
//         }
//         r++;

//     }
//     cout<<ans<<endl;
    
    
// }