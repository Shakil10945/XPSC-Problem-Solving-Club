#include <bits/stdc++.h>
using namespace std;

int check_the_kth_bit_on_or_off(int n, int k)
{
    return (n >> k) & 1;
}
void print_on_and_off_bits(int n)
{
    for (int k = 5; k >= 0; k--)
    {
        if (check_the_kth_bit_on_or_off(n, k))
        {
            cout << 1 << " ";
        }
        else
            cout << 0 << " ";
    }
}

int turn_on_kth_bit(int n, int k)
{
    return (n | (1 << k));
}

int turn_off_kth_bit(int n, int k)
{
    return (n & (~(1 << k)));
}

int toggle_kth_bit(int n, int k)
{
    return(n ^ (1<<k));
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 45;

    cout << check_the_kth_bit_on_or_off(16, 4) << endl;

    print_on_and_off_bits(n);

    cout << endl << turn_on_kth_bit(45, 1) << endl;

    cout<< turn_off_kth_bit(45, 5)<<endl;

    cout<< toggle_kth_bit(n, 4) <<endl;

    return 0;
}