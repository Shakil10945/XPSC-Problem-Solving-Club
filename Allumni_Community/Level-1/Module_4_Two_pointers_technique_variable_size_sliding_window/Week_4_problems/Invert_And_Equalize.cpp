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
        string str; cin>>str;

        char current = str[0];
        int change =0;
        for(int i=0; i<n; i++)
        {
            if(str[i] != current)
                change++;
            current = str[i];
        }
        cout<<ceil(double(change)/2)<<endl;
    }

    return 0;
}

