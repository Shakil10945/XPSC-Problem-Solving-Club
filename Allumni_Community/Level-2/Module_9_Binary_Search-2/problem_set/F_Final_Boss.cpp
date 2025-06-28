#include <bits/stdc++.h>
using namespace std;

long long h,n;
vector<long long> vec;
vector<long long> c;

void input()
{
    cin>>h >> n;
    vec.resize(n);
    c.resize(n);

    for (int i = 0; i < n; i++)
        cin >> vec[i];
    for (int i = 0; i < n; i++)
        cin >> c[i];
    
}

void solve()
{
    input();

    auto ok = [&](long long mid)
    {
        long long cnt = accumulate(vec.begin(),vec.end(),0LL);
        if(cnt>=h)  return true;
        for(int i=0; i<n; i++)
        {
            //cnt += (mid-1)/c[i]*vec[i];
            long long times = (mid-1)/c[i];
            if(times>=(h-cnt+vec[i]-1)/vec[i])
                return true;
            cnt +=times*vec[i];
        }
        return cnt>=h;
    };
    
    long long l = 1, r = 1e18, mid, ans;

    while(l<=r)
    {
        mid = l+(r-l)/2;
        if(ok(mid))
        {
            ans = mid;
            r = mid-1;

        }
        else
            l = mid+1;

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


// #include <bits/stdc++.h>
// using namespace std;

// long long h, n;
// vector<long long> vec;
// vector<long long> c;

// void input()
// {
//     cin >> h >> n;
//     vec.resize(n);
//     c.resize(n);

//     for (int i = 0; i < n; i++)
//         cin >> vec[i];
//     for (int i = 0; i < n; i++)
//         cin >> c[i];
// }

// void solve()
// {
//     input();

//     auto ok = [&](long long mid)
//     {
//         long long cnt = accumulate(vec.begin(), vec.end(), 0LL);
//         if (cnt >= h) return true;

//         for (int i = 0; i < n; i++)
//         {
//             long long times = (mid - 1) / c[i];
//             // check overflow:
//             if (vec[i] != 0 && times > (h - cnt + vec[i] - 1) / vec[i])
//                 return true;
//             if (times * vec[i] > h - cnt)
//                 cnt = h;
//             else
//                 cnt += times * vec[i];

//             if (cnt >= h)
//                 return true;
//         }
//         return cnt >= h;
//     };

//     long long l = 1, r = 1e18, ans = r;

//     while (l <= r)
//     {
//         long long mid = l + (r - l) / 2;
//         if (ok(mid))
//         {
//             ans = mid;
//             r = mid - 1;
//         }
//         else
//             l = mid + 1;
//     }
//     cout << ans << endl;
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