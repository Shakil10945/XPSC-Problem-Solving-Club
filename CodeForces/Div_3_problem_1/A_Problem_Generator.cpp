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
    /* code */
    int n, m;
    cin >> n >> m;
    string str;
    cin >> str;
    map<char, int> my_map;
    for (int i = 0; i < n; i++)
      my_map[str[i]]++;

    int total_req = 0;
    for (int i = 'A'; i <= 'G'; i++)
    {
      if (my_map[i] < m)
        total_req += m - my_map[i];
    }
    cout << total_req << endl;
  }

  return 0;
}