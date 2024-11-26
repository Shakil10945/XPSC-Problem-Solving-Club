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
        int n, k;
        cin >> n >> k;

        vector<int> fruit(n);
        vector<int> height(n);

        for (int i = 0; i < n; i++)
            cin >> fruit[i];
        for (int i = 0; i < n; i++)
            cin >> height[i];

        int minimum = *min_element(fruit.begin(), fruit.end());

        if (k < minimum)
        {
            cout << -1 << endl;
            continue;
        }

        int l = 0, r = 0, size = 0;
        long long temp_fruit = 0;     

        while (r < n)
        {
            do
            {
                temp_fruit += fruit[r];
                cout<<fruit[r]<<" -> ";
                if (temp_fruit <= k)
                    size = max(size, (r - l + 1));

                   

                else
                {
                    while(temp_fruit>k && l<=r)
                    {
                        temp_fruit -= fruit[l];
                        l++;
                    }
                    
                    if (temp_fruit <= k)
                        size = max(size, (r - l + 1));
                }
                r++;                
            } while (r < n - 1 && height[r] % height[r + 1] == 0);

            temp_fruit =0;
            r++;
        }
        cout<<'s'<<endl;
        cout << size << endl;
    }

    return 0;
}