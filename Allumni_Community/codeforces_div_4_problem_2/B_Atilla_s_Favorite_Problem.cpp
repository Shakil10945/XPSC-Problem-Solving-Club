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
        int a;
        cin >> a;
        string str;
        cin >> str;

        

        int siz = 0;
        for(int i=0; i<a; i++)
        {
            siz = max(str[i] - 'a' +1, siz);
        }
        cout<<siz<<endl;
    }

    return 0;
}
