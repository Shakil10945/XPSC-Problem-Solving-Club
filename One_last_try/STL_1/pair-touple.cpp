#include <bits/stdc++.h>
using namespace std;

int main()
{
  pair<string, int> student = {"Sakk", 10};
  cout << student.first << " " << student.second << endl;
  student.first = "bablu";
  auto [name, roll] = student;
  cout << name << " " << roll << endl;

  int n;
  cin >> n;
  pair<string, int> students[n];
  for (int i = 0; i < n; i++)
  {
    cin >> students[i].first >> students[i].second;
  }

  for (int i = 0; i < n; i++)
  {
    cout << students[i].first << " " << students[i].second;
  }
  for (auto [x, y] : students)
    cout << x << " " << y << endl;

  touple<string, int, string> t = {"Kairm", 34, " shahah"};
  cout << get<0>(t) << " " < get<1>(t) << " " << get<2>(t) << endl;

  auto [name, roll, phoneNumber] = t;
  cout << name << " " << roll << " " << phoneNumber << endl;

  pair<string, pair<int, string>> p = {"Sas", {1, "shak"}};

  string name = p.first;
  int roll = p.second.first;
  string phoneNum = p.second.second;
  cout << name << " " << roll << " " << phoneNum << endl;

  return 0;
}