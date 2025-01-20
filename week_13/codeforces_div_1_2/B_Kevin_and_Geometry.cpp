#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> vec;

void input()
{
    cin >> n;
    vec.resize(n);
    for (int i = 0; i < n; i++)
        cin >> vec[i];
}

void solve()
{
    input();
    map<int,int> my_map;
    for(auto &x: vec)
        my_map[x]++;
    
    sort(vec.begin(), vec.end());

    bool check = false;
    // for(auto x: my_map)
    //     cout<<x.first<<" -> "<<x.second<< " ";
    // cout<<endl;
    // for(auto x: vec)
    //     cout<<x<<" ";
    // cout<<endl;

    for(int i=0; i<n; i++)
    {
        if(my_map[vec[i]] >=2)
        {
            //cout<< i<<" index "<<endl;
            if(i > 0  &&  i < n-2)
            {
                if(((vec[n-2] - vec[n-1]) + (2 *vec[i])) >0)
                {
                    check = true;
                    cout<< vec[i]<<" "<<vec[i]<<" "<< vec[n-2]<<" "<<vec[n-1]<<endl;
                    my_map.clear();
                    return;
                }
                else
                    continue;
            }
            if(i==0)
            {
                //cout<< "Hi";
                if(( (vec[n-2] - vec[n-1]) + (2*vec[i])) > 0)
                {
                    check = true;
                    cout<< vec[i]<<" "<<vec[i]<<" "<< vec[2]<<" "<<vec[n-1]<<endl;
                    my_map.clear();
                    return;
                }
                else
                    continue;
            }
            if(i==n-2)
            {
                if(( (vec[0] - vec[1]) + (2*vec[i])) > 0)
                {
                    check = true;
                    cout<< vec[i]<<" "<<vec[i]<<" "<< vec[0]<<" "<<vec[1]<<endl;
                    my_map.clear();
                    return;
                }
                else
                    continue;
            }
        }
        else
            continue;
    }
    if(!check)
        cout<<-1<<endl;
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