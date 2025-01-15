#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> a;
vector<int> b;


void input()
{
    cin>>n;
    a.resize(n);
    b.resize(n);

    for(int i=0; i<n; i++)  cin>>a[i];
    for(int i=0; i<n; i++)  cin>>b[i];
}

void solve()
{
    input();

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    long long sum_a = accumulate(a.begin(), a.end(), 0);
    long long sum_b = accumulate(b.begin(), b.end(), 0);

    // int count_zero = 0;
    // int greater_b = 0;
    // int long long greater_b_cumulate = 0;
    // long long greater_a_cumulate = 0;
    // for(int i=0; i<n; i++)
    // {
    //     if(a[i] == 0 && (a[i]<b[i]))   count_zero++;

    //     if(a[i]< b[i])
    //     {
    //         greater_b_cumulate+= (b[i] - a[i]);
    //         greater_b++;
    //     }
    //     else
    //     {
    //         greater_a_cumulate+=(a[i] - b[i]);
    //     }
    // }

    // sum_a += greater_b;
    // sum_a -= ((n-1) * greater_b);

    // if(sum_a>=sum_b)    cout<<"YES"<<endl;
    // else                cout<<"NO"<<endl;
    int count =0;

    for(int i=0; i<n; i++)
    {
        if(a[i] <= b[i] && !(a[i] == 0 && b[i] == 0)) count++;
    }

    if(sum_a < sum_b)     cout<<"NO"<<endl;
    else if(sum_a == sum_b)
    {
        for(int i=0; i<n; i++)
        {
            if(a[i]< b[i])
            {
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    else            cout<<"YES"<<endl;    
}

int main()
{
    ios::sync_with_stdio(false);    cin.tie(nullptr);
    int t;  cin>>t;
    while(t--)  solve();

    return 0;
}
