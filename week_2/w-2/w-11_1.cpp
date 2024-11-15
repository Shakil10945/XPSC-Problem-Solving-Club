#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; // Number of test cases
    cin >> t;

    while (t--)
    {
        int n, m, q; // n = total cells, m = number of teachers, q = number of queries
        cin >> n >> m >> q;

        vector<int> teacher(m); // Store teacher's positions
        vector<int> student(q); // Store student's queries

        for (int i = 0; i < m; i++)
        {
            cin >> teacher[i];
        }

        for (int i = 0; i < q; i++)
        {
            cin >> student[i];
        }

        for (int i = 0; i < q; i++)
        {
            int t_cell = teacher[i]; // Handle case when m < q
            int s_cell = student[i];
            
            if(i == 0)
            {
                if(s_cell< t_cell)
                {
                    cout<<t_cell-1<<endl;
                }
                else
                {
                    if(q>1)
                    {
                        cout<< abs( t_cell - (min(student[1], teacher[1])-1))<< endl;
                    }
                    else
                    {
                        cout<< abs(t_cell - n)<<endl;
                    }

                }
            }
            else if( i > 0 && i< q-1)
            {
                if(t_cell < s_cell)
                {
                    cout<< (min(teacher[i+1] , student[i+1]) -1 ) - t_cell<<endl;

                }
                else
                {
                    cout<< t_cell - (max(teacher[i-1], student[i-1]) +1)<< endl;


                }
            }
            else if(i == q-1)
            {
                if(t_cell<s_cell)
                {
                    cout<< n-t_cell<<endl;
                }
                else
                {
                    cout<< t_cell - (max(teacher[i-1], student[i-1]) +1)<< endl;
                }
            }
        }
    }
    return 0;
}
