#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        int x, y;
        cin >> x >> y;

        int z = 0;

        if (x == y)
        {
            for (int i = 1; i < y; i++)
            {
                if ((x + i) % 2 == 0)
                    z++;
            }
        }
        else if (x < y)
        {
            // if (x % 2 == 0 || x % 2 != 0)
            // {
            //     for (int i = 1; i <= y; i++)
            //     {
            //         if ((x + i) % 2 == 0 && y!=x)
            //             z++;
            //     }
            // }
            // else if (y % 2 == 0 && y!=x)
            // {
            //     for (int i = 1; i <= x; i++)
            //     {
            //         if ((y + i) % 2 == 0)
            //             z++;
            //     }
            // }
            for(int i=1; i<=y; i++)
            {
                if((x+i)%2 == 0 && x!=i)
                    z++;
            }
        }
        else if (x > y)
        {
            // if (y % 2 == 0 || y % 2 != 0)
            // {
            //     for (int i = 1; i < x; i++)
            //     {
            //         if ((y + i) % 2 == 0 && y!=x)
            //             z++;
            //     }
            // }
            // else if (x % 2 == 0)
            // {
            //     for (int i = 1; i <= y; i++)
            //     {
            //         if ((x + i) % 2 == 0 && y!=x)
            //             z++;
            //     }
            // }
            for(int i=1; i<=x; i++)
            {
                if((y+i)%2 == 0 && y!=i)
                    z++;
            }
        }

        cout << z << endl;
    }

    return 0;
}