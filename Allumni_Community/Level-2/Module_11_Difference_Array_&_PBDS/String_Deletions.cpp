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

        int s = 0, i = 1;
        while(str[i]==str[0])
        {
            i++;
            s = i;
            s--;
        }
        int ss = n-1, ii = n-2;
        while(str[ii]==str[n-1])
        {
            ii--;
            ss = ii;
            ss++;
        }
        if(ss<s)
        {
            cout<<n<<endl;
            continue;
        }
        if(ss==s+1)
        {
            cout<<n<<endl;
            continue;
        }
        if(str[0]== str[n-1])
        {
            cout<<n- (ss-s-1)<<endl;
        }
        else
            cout<<(n-(ss-s-1))+1<<endl;
    }

    return 0;
}

