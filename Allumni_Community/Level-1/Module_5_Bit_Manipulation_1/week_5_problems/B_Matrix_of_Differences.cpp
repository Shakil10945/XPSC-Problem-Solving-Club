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
        int n;  cin>>n;

        vector<int>vec;
        for(int i=n*n, j=1; i>=j; i--, j++)
        {
            if(i==j)
            {
                vec.push_back(i);
                continue;
            }
            vec.push_back(i);
            vec.push_back(j);
        }
        bool check = true;
        for(int i=1; i<=n; i++)
        {
            if(check)
            {
                for(int j=0; j<n; j++)
                {
                    cout<<*vec.begin()<<" ";
                    vec.erase(vec.begin());
                }
                cout<<endl;
                check = 0;
            }
            else
            {
                for(int j=n-1; j>=0; j--)
                {
                    cout<<*(vec.begin()+j)<<" ";
                    vec.erase(vec.begin()+j);
                }
                cout<<endl;
                check = 1;
            }
        }
    }

    return 0;
}

