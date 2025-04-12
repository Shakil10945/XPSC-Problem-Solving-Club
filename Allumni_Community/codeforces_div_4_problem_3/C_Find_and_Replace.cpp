
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
        int n; cin>>n;
        string str; cin>> str;

        vector<int> pos(26);
        for(int i=0; i<26; i++)
            pos[i] = -1;
        bool check = false;
        for(int i=0; i<n; i++)
        {
            int curr = (str[i] - 'a');
            if(pos[curr] == -1)
            {
                pos[curr] = (i%2);
            }
            else
            {
                if(pos[curr]!=(i%2))
                {
                    cout<<"NO"<<endl;
                    check = true;
                    break;
                }
            }
        }

        if(! check)  cout<<"YES"<<endl;
    }

    return 0;
}

