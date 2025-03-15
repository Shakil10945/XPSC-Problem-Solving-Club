#include <bits/stdc++.h>
using namespace std;

int check_kth_bit_on_or_off(int n, int k)
{
  return (n >> k) & 1;
}

void print_on_and_off_bits(itn n)
{
  for (int k = 30; k >= 0; k--)
  {
    if (check_kth_bit_on_or_off(n, k))
      cout << 1 << " ";
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
  return (n ^ (1 << k));
}

int main()
{
  int n = 45;
  cout << check_kth_bit_on_or_off(n, 5) << endl;
  print_on_and_off_bits(n);

  cout << turn_on_kth_bit(n, 2) << endl;
  cout << turn_off_kth_bit(n, 3) << endl;
  cout << toggle_kth_bit(n, 5) << endl;

  return 0;
}