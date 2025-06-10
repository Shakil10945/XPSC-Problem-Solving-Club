#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    pair<string, int> student = {"dablue", 66};
    cout<<student.first<<" "<<student.second<<endl;
    student.first ="leegalll";

    auto [name, roll] = student;
    cout<<name<<" "<<roll<<endl;

    int n;
    cin>>n;
    pair<string, int> students[n];
    for(int i=0; i<n; i++)
        cin>>students[i].first>>students[i].second;
    
    for(auto[x,y]: students)
        cout<<x<<" "<<y<<endl;
    
    tuple<string, pair<int,string>> p = {"dablu", {55, "pappu"}};

    cout<<get<0>(p)<<get<1>(p)<< get<2>(p)<<endl;
    auto[name,x] = p;

    string name = p.first;
    int roll = p.second.first;
    string phone = p.second.second;
    cout<<name<<" "<<roll<<" "<<phone<<endl;
    return 0;
}