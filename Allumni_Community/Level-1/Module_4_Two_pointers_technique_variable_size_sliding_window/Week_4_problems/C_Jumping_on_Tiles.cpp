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
        string str;
        cin>>str;

        int n= str.size();

        map<char, vector<int>> let_to_ind;
        for(int i=0;i<n;i++)
            let_to_ind[str[i]].push_back(i);
        int direction = (str[0]< str[n-1] ? 1 : -1);
        vector<int> ans;
        for(char c = str[0]; c!=str[n-1]+direction; c+=direction)
        {
            for(auto now : let_to_ind[c])
                ans.push_back(now);
        }
        int cost = 0;
        for(int i=1; i<ans.size(); i++)
            cost+= abs(str[ans[i]] -str[ans[i-1]]);

        cout<<cost<<" "<<ans.size()<<endl;
        for(auto now: ans)
            cout<<now+1<<" ";
        cout<<endl;

    }
    return 0;
}
    