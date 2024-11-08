#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        multiset<int> my_set;
        while (n--)
        {
            int x;
            cin >> x;
            my_set.insert(x);
        }
        cout<<"initial set->  ";
        for(auto &x: my_set)    cout<<x<< " ";

        cout<< endl;

        cout<<"Begin and end pair: ";
        while (!my_set.empty())
        {
            auto it = my_set.upper_bound(*my_set.begin());

            //cout<< *it<<" ";

            if (it != my_set.end())
            {
                cout<<*my_set.begin()<< " "<<*it<<" ";
                my_set.erase(it);
                my_set.erase(my_set.begin());
            }
            else
                break;
        }
        cout<<endl;
        cout<< "finally set->";
        for(auto &x: my_set)    cout<<x<< " ";

        cout<< endl;

        cout << "final size  -> " <<my_set.size() << endl;


        cout<<endl;
    }

    return 0;
}