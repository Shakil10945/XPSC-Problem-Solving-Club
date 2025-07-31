#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        int s;
        cin >> n >> s;
        vector<int> a(n);
        int z=0, o=0, t=0;
        for(int &x:a){
            cin >> x;
            if(x==0) z++;
            else if(x==1) o++;
            else t++;
        }

        int sum = int(o) + 2LL*int(t);
        int d = s - sum;

        if (d < 0 || d == 1) 
        {
            bool first = true;
            auto out = [&](int cnt, int val)
            {
                while(cnt--)
                {
                    if(!first) cout << ' ';
                    cout << val;
                    first = false;
                }
            };
            out(z, 0);
            out(t, 2);
            out(o, 1);
            cout << endl;
        } 
        else 
        {

            cout << -1 << endl;
        }
    }
    return 0;
}
