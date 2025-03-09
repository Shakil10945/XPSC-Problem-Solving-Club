#include <bits/stdc++.h>
using namespace std;

unordered_set<int> sqs;
void precompute_layers()
{
  int k = 1;
  while (k * k <= 100000)
  {
    sqs.insert(k * k);
    k += 2;
  }
}

int n;
vector<int> vec;

void input()
{
  cin >> n;
  vec.resize(n);

  for (int i = 0; i < n; i++)
    cin >> vec[i];
}

void solve()
{
  input();
  int happy = 0;
  int rem = 0;
  for (int i = 0; i < n; i++)
  {
    rem += vec[i];
    if (sqs.count(rem))
    {
      happy++;
    }
  }
  cout << happy << endl;
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  precompute_layers();
  int t;
  cin >> t;
  while (t--)
    solve();

  return 0;
}
