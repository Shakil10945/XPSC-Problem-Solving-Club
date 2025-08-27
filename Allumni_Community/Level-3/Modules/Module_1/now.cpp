#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    pair<string,int> student = {"dablu", 10};
    cout<< student.first<<" "<<student.second<<endl;

    student.first = "hablu";

    auto [name, roll] = student;
    cout<<name<< " "<< roll<<endl;

    int n;  cin>>n;

    pair<string, int> students[n];

    for(int i = 0; i<n; i++)
        cin>>students[i].first>> students[i].second;

    for(int i=0; i<n; i++)
        cout<<students[i].first<<" "<<students[i].second<<endl;
    
    for(auto [x,y] : students)
        cout<<x<<" "<<y<<endl;

    tuple<string, int, string> t = {"karim", 66, "go"};
    cout<<get<0>(t)<<" "<<get<1>(t)<<" "<<get<2>(t)<<endl;

    pair<string, pair<int, string>> p = {"sablu", {88, "dd"}};

    string name = p.first;
    int roll = p.second.first;
    string phoneNumber = p.second.second;

    cout<<name<< " "<<roll<<" "<<phoneNumber<<endl;

    return 0;
}

