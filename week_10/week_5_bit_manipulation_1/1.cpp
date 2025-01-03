#include <bits/stdc++.h>
using namespace std;

int check_kth_bit_on_or_off(int n, int k)
{
    return (n >> k) & 1;
}