// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
 
//     int n = 45;
//     // cout << check_kth_bit_on_or_off(n, 4) << '\n';
//     // print_on_and_off_bits(n);
//     // cout << turn_on_kth_bit(n, 2) << '\n';
//     // cout << turn_off_kth_bit(n, 3) << '\n';
//     cout << toggle_kth_bit(n, 5) << '\n';
 
//     return 0;
//  }


#include<bits/stdc++.h>
using namespace std;

int check_kth_bit_on_or_off(int n, int k)
{
    return ((n>>k)&1);
}

void print_on_and_off_bits(int n)
{
    for(int i=30; i>=0; i--)
    {
        cout<<((n>>i)&1 )<<" ";
    }
    cout<<endl;
}

int turn_on_kth_bit(int n, int k)
{
    return ((1<<k)|n);
}

int turn__off_kth_bit(int n, int k)
{
    return ((~(1<<k))&n);
}

int toggle_kth_bit(int n, int k)
{
    return ((1<<k)^n);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 45;
    cout<< check_kth_bit_on_or_off(n,1)<<endl;

    print_on_and_off_bits(45);

    cout<<turn_on_kth_bit(45,1)<<endl;

    cout<<turn__off_kth_bit(45,2)<<endl;
    cout<<turn__off_kth_bit(45,4)<<endl;

    cout<<toggle_kth_bit(45,1);
    cout<<toggle_kth_bit(45,0);


    return 0;
}