#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    for (auto &x : vec)
        cin >> x;

    //sort(vec.begin(), vec.end());

    int m=0;

    auto d = max_element(vec.begin(), vec.end());

    //cout<< *d<<endl;

    for (int i = 0; i <n;i++)
    {
        //cout<< vec[i]<<" ";
        if(*d==vec[i])       m++;

       
    }

    cout << m << endl;

    return 0;
}