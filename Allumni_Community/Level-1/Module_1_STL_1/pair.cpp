#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    pair<string, int> student = {"haasana", 44};
    cout<<student.first<<" "<<student.second<<endl;

    student.first = "Shakil";

    auto [name, roll] = student;

    cout<<name<<" "<<roll<<endl;

    int n; cin>>n;
    pair<string, int> students[n];
    for(int i=0; i<n; i++)
    {
        cin>>students[i].first>>students[i].second;
    }
    for(auto [x,y]: students)
        cout<<x<<" "<<y<<endl;

    
    tuple<string, int, string> t = {"Shakil", 55, "Rayhan"};
    cout<<get<0>(t)<<" "<<get<1>(t)<<" "<<get<2>(t)<<endl;

    auto [name, roll, phonenumber] = t;
    cout<<name<<" "<<roll<<" "<<phonenumber;
    pair<string,pair<int, string>>p = {"aha", {44, "dddd"}};
    string name = p.first;
    int roll = p.second.first;
    string phonenumber = p.second.second;
    cout<<name<<" "<<roll<<" "<<phonenumber<<endl;
    
    return 0;
}

