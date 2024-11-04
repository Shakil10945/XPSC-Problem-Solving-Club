#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;

        vector<int> a;
        vector<int> b;
        map<int, int> result;
        vector<int> unique;

        for (int i = 0; i < n; i++)
        {
            int m;
            cin >> m;
            a.push_back(m);
        }
        for (int i = 0; i < n; i++)
        {
            int m;
            cin >> m;
            b.push_back(m);
        }
        int sum = 0;
        set<int> myset;
        for (int i = 0; i < n; i++)
        {
            result[a[i] - b[i]]++;
            if ((a[i] - b[i]) > 0)
                sum++;
            myset.insert(a[i] - b[i]);
        }
        
        bool check = false;
        if (sum > (n / 2))
        {
            cout << "YES" << endl;
            check = true;
        }
        if (check)
            continue;
        for(auto mx : myset)
        {
            if(mx <=0)
                unique.push_back(mx);
        }
        if(!unique.empty())
        {
            sort(unique.begin(), unique.end(), greater<int>());
        }
        if(sum<= (n/2))
        {
            for (auto dd : unique)
            {
                if (sum > (n / 2))
                {
                    //cout << "YES" << endl;
                    check = true;
                }
                if(check)       break;
                while (result[dd] >0 && x != 0)
                {
                    result[dd]++;
                    x--;
                }
                sum++;
                if (sum > (n / 2))
                {
                    //cout << "YES" << endl;
                    check = true;
                }
                if(x == 0 && !check)        break;
                if(check)       break;
                continue;
                
            }
        }
        if (check)
        {
            cout<<"YES"<<endl;
            continue;
        }
        cout << "NO" << endl;
    }

    return 0;
}