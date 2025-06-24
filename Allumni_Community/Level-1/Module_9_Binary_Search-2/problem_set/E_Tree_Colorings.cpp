#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        long long m;
        cin >> m;

        if (m == 1)
        {
            cout << 1 << endl;
            continue;
        }

        long long temp = m;

        bool isPowerOf3 = true;
        while (temp > 1)
        {
            if (temp % 3 != 0)
            {
                isPowerOf3 = false;
                break;
            }
            temp /= 3;
        }

        if (isPowerOf3 && temp == 1)
        {
            long long k = 0;
            temp = m;

            while (temp > 1)
            {
                temp /= 3;
                k++;
            }
            cout << k + 1 << endl;
            continue;
        }



        temp = m;
        vector<long long> powers;
        long long power = 1;
        while (power <= 5e5)
        {
            powers.push_back(power);
            power *= 3;
        }


        
        if (find(powers.begin(), powers.end(), m) != powers.end())
        {
            long long k = 0;
            temp = m;
            while (temp > 1)
            {
                temp /= 3;
                k++;
            }
            cout << k + 1 << endl;
        }


        else
        {
            if (m == 5)
                cout << 3 << endl;
            else if (m == 7)
                cout << 4 << endl;
            else if (m == 3)
                cout << 2 << endl;
            else
                cout << -1 << endl;
        }
    }



    return 0;
}