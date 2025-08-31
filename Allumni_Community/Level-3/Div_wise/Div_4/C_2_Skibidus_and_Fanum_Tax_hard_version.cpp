#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<long long> vec;
vector<long long> vecx;

void input() {
    cin >> n >> m;
    vec.resize(n);
    vecx.resize(m);

    for (int i = 0; i < n; i++)
        cin >> vec[i];
    for (int i = 0; i < m; i++)
        cin >> vecx[i];
}

void solve() 
{
    input();

    if (is_sorted(vec.begin(), vec.end())) {
        cout << "YES\n";
        return;
    }

    sort(vecx.begin(), vecx.end());

    long long prev = -1e18;
    long long d = 1e18;
    for(int i=0;i <n; i++)
    {
        long long choice1, choice2;

        if(vec[i]>=prev)
            choice1 = vec[i];
        else
            choice1 = (long long)1e18;
        
        long long need = vec[i] + prev;

        int idx = lower_bound(vecx.begin(),vecx.end(), need)-vecx.begin();
        if(idx<m)
            choice2 = vecx[idx] - vec[i];

        else
            choice2 = (long long )1e18;

        if(choice1== d && choice2==d)
        {
            cout<<"NO"<<endl;
            return;
        }
        prev = (choice1<choice2? choice1: choice2);
    }
    cout<<"YES"<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}