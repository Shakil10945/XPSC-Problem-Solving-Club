#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;  cin>>t;
    while (t--)
    {
        int n;  cin>>n;
        vector<char> vec(n);
        set<char> myset;

        for(auto &x: vec)
        {
            cin>>x;
            myset.insert(x);
        }

        vector<char>vec2(myset.begin(), myset.end());

        vector<char>vec3;

        for(int i=0; i<vec.size();i++)
        {
            int d=-1;

            for(int j=0; j<vec2.size(); j++)
            {
                if(vec[i] == vec2[j])
                {
                    d = j;
                    break;
                }
            }
            vec3.push_back(vec2[vec2.size()-d-1]);
        }
        for(auto &x: vec3)
            cout<<x;

        cout<<endl;
    }
    

    return 0;
}