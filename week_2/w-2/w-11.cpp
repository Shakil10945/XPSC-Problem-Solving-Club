#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while (t--)
    {
        int n, m, q;
        cin>>n>>m>>q;

        vector<int> teacher;
        vector<int> student;

        vector<bool> v(n+1, false);
        while(m--)
        {
            int x;
            cin>>x;
            //teacher.insert(x);
            teacher.push_back(x);
            v[x] = true;

        }
        while(q--)
        {
            int x;
            cin>>x;
            //student.insert(x);
            student.push_back(x);
            v[x] = true;
        }
        for(int i=0; i<q;i++)
        {
            int t_cell = teacher[i];
            int s_cell = student[i];
            cout<< t_cell - s_cell<<" ";   
        }
        cout<<endl;   
    }
    return 0;
}