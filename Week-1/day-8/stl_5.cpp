#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        map<string, vector<string>> mymap;

        int one = 0;
        int two = 0;
        int three =0;

        for(int i=0; i<n;i++)
        {
            string name = "ek";
            string st;
            cin>>st;
            mymap[st].push_back(name);
        }
        for(int i=0; i<n;i++)
        {
            string name = "dui";
            string st;
            cin>>st;
            mymap[st].push_back(name);
        }
        for(int i=0; i<n;i++)
        {
            string name = "tin";
            string st;
            cin>>st;
            mymap[st].push_back(name);
        }

        for(auto element : mymap)
        {
            if(element.second.size() >=3)   continue;

            else if(element.second.size() ==2)
            {
                if(element.second[0] == "ek" || element.second[1] == "ek")        one++;
                if(element.second[0] == "dui" || element.second[1] == "dui")      two++;
                if(element.second[0] == "tin" || element.second[1] == "tin")       three++;
            }

            else if(element.second.size() ==1)
            {
                if(element.second[0] == "ek")        one+=3;
                if(element.second[0] == "dui")      two+=3;
                if(element.second[0] == "tin")       three+=3;
            }
        }

        cout<<one<<" "<< two<<" "<<three<<endl;
        
    }
    

    return 0;
}