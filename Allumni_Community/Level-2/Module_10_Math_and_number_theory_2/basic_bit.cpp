#include <bits/stdc++.h>
using namespace std;

int check_kth_bit_on_or_off(int n, int k)
{
    return(n>>k)&1;
}

void print_on_and_off_bits(int n)
{
    for(int k=30; k>=0; k--)
    {
        if(check_kth_bit_on_or_off(n, k))
            cout<<1<<" ";
        else
            cout<<0<<" ";
        //cout<<endl; 
    }
}

int turn_on_kth_bit(int n, int k)
{
    return(1<<k)|n;
}

int turn_off_kth_bit(int n, int k)
{
    return (~(1<<k))&n;
}

int toogle_kth_bit(int n, int k)
{
    return (n^(1<<k));
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;  cin>>n;


    return 0;
}

