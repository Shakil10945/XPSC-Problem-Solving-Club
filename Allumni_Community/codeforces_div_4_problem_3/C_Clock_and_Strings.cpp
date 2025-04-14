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
        int a,b,c,d;

        cin>>a>>b>>c>>d;
        int blue =0, red = 0;
        string s;
        //cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
        for (int i = 1; i <= 12; i++) {
            if (i == a || i == b) {s += "a";}
            if (i == c || i == d) {s += "b";}
        }
        cout << (s == "abab" || s == "baba" ? "YES\n" : "NO\n");
    }

    return 0;
}

