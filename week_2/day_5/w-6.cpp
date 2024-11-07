#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        string ss;
        cin >> s >> ss;

        bool check = true;

        for (int i = 0; i < n; i++)
        {
            if ((s[i] == 'R' || ss[i] == 'R') && (s[i] != ss[i]))
            {
                check = false;
                //cout<<s[i] << " "<< ss[i]<<"  ";
            }
        }
        if (!check)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}