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
        int n, m, h;
        cin >> n >> m >> h;

        multiset<int> car_cap;
        vector<int> outlet_cap;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            car_cap.insert(x);
        }
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            outlet_cap.push_back(x);
        }
        //sort(car_cap.begin(), car_cap.end(), greater<int>());
        sort(outlet_cap.begin(), outlet_cap.end(), greater<int>());

        int charge = 0;
        for (int i = 0; i < min(n, m); i++)
        {
            int temp_charge = outlet_cap[i] * h;

            auto it = car_cap.lower_bound(temp_charge);
            if(it != car_cap.end())
            {
                charge += temp_charge;
                car_cap.erase(it);
            }

            else
            {
                charge += *(--car_cap.end());
                car_cap.erase(--car_cap.end());

            }
        }

        cout << charge << endl<<endl;
    }

    return 0;
}