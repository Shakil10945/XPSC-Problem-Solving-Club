#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n
          cin >>
      n;
  string s;
  cin >> s;
  cout << s << endl;

  for (int i = 1; i <= n; i++)
  {
    char c;
    cin >> c;
    s.push_back(c);
  }
  s.pop_back();
  cout << s << endl;

  cout << s.front() << " " << s.back() << endl;
  s.clear();
  cout << s.empty() << endl;

  string s;
  cin >> s;
  cout << s.substr(1, 3) << endl;
  cout << s.substr(2) << endl;

  return 0;
}