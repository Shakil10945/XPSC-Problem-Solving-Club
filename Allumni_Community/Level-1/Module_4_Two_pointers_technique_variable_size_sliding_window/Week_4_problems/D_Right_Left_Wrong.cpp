#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> vec;
string str;

void input()
{
    cin >> n;
    vec.resize(n);

    for (int i = 0; i < n; i++)
        cin >> vec[i];

    cin>>str;
    
}

void solve()
{
    input();

    vector<long long>prefixsum;
    prefixsum.push_back(vec[0]);
    for(int i=1; i<n; i++)
    {
        prefixsum.push_back(prefixsum[i-1]+vec[i]);
    }

    set<int>lset;
    set<int>rset;
    

    for(int i=0; i<n; i++)
    {
        if(str[i] == 'L')   lset.insert(i);
        else                rset.insert(i);
    }

    vector<pair<int,int>> vp;

    while(!lset.empty() && !rset.empty())
    {
        //cout<<"HI"<<endl;
        if(*lset.begin() < *rset.rbegin())
        {
            //cout<<"HIwww"<<endl;
            vp.push_back({*lset.begin(), *rset.rbegin()});
            lset.erase(lset.begin());
            rset.erase(--rset.end());
        }
        else
            break;
    }
    long long sum =0;
    for(auto it : vp)
    {
        if(it.first == 0)
        {
            sum+= prefixsum[it.second];
            continue;
        }
        sum+= (prefixsum[it.second] - prefixsum[it.first-1]);
    }
    cout<<sum<<endl;


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