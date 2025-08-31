// #include <bits/stdc++.h>
// using namespace std;

// const int MAX = 200'007;
// int res[MAX];

// int S(int x)
// {
//     int res = 0;
//     while (x)
//     {
//         res += (x % 10);
//         x /= 10;
//     }
//     return res;
// }

// void solve()
// {
//     int x;
//     cin >> x;
//     cout << res[x] << endl;
// }

// void calculate()
// {
//     res[0] = 0;
//     for (int i = 1; i < MAX; i++)
//         res[i] = res[i - 1] + S(i);
// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     calculate();

//     int t;
//     cin >> t;

//     while (t--)
//         solve();

//     return 0;
// }




#include <bits/stdc++.h>
using namespace std;

int maxx = 2e5+7;
vector<long long> vec(maxx);

void cal()
{
    vec[0]=0;
    long long sum =0;
    for(int i=1; i<=maxx; i++)
    {
        string str = to_string(i);
        for(int j=0; j<str.size();j++)
        {
            sum += str[j]-'0';
        }
        vec[i] = sum;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cal();

    int t;
    cin >> t;
    while (t--)
    {
        int n; 
        cin>>n; 
        
        cout<<vec[n]<<endl;
    }

    return 0;
}

