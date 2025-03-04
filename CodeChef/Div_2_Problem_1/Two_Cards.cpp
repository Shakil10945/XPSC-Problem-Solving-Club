#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> vec;
vector<int> vec2;

void input()
{
  cin >> n;
  vec.resize(n);
  vec2.resize(n);

  for (int i = 0; i < n; i++)
    cin >> vec[i];
  for (int i = 0; i < n; i++)
    cin >> vec2[i];
}

void solve()
{
  input();

  int a_max = *max_element(vec.begin(), vec.end());
  int b_max = *max_element(vec2.begin(), vec2.end());
  int max_index_of_a = 0;
  string ans = "NO";
  for (int i = 0; i < n; i++)
  {
    if (vec[i] == a_max)
      max_index_of_a = i;
  }

  for(int i=0; i<n; i++)
  {
    if(i == max_index_of_a) continue;

    if(max(vec[i], vec2[i]) > max(vec[max_index_of_a], vec2[max_index_of_a]))
    {
      ans = "YES";
    }
  }
  int max_of_2 = -1;
  for(int i=0; i<n; i++)
  {
    if(i== max_index_of_a)  continue;

    if(max_of_2 == -1 || vec[i] > vec[max_of_2])
    {
      max_of_2 = i;
    }
  }
  if(max(vec[max_index_of_a], vec2[max_index_of_a]) > max(vec[max_of_2], vec2[max_of_2]))
    ans = "YES";
  cout<<ans<<endl;
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--)
    solve();

  return 0;
}
