#include <bits/stdc++.h>
using namespace std;

int check_kth_bit_on_or_off(int n, int k)
{
    return (n>>k)&1;
}

void print_on_and_off_bits(int n)
{
    for(int k=30; k>=0; k--)
    {
        if(check_kth_bit_on_or_off(n k))
            cout<<1<<" ";
        else
            cout<<0<<" ";
    }
}

int turn_on_kth_bit(int n, int k)
{
    return(n|(1<<k));
}

int turn_off_kth_bit(int n, int k)
{
    return(n & (~(1<<k)));
}


int toogle_kth_bit(int n, int k)
{
    return (n^(1<<k));
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 45;



    return 0;
}

