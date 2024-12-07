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
        int number;
        cin>>number;
        string str = to_string(number);
        if(number%9 == 0)
        {
            cout<<"YES"<<endl;
            continue;
        }
        number = (number%9);
        int present_2 = 0;
        int present_3 = 0;
        for(int i=0; i<str.size(); i++)
        {
            if(str[i] == '2')
                present_2++;
            else if(str[i] == '3')
                present_3++;
        }
        int new_number = (present_2*2) + (present_3 *3);

        if(number%2 == 1)
        {
            if(number == 1)
            {
                if(present_2>=4 || (present_2 && present_3))
                    cout<< "YES"<<endl;
                else
                    cout<<"NO"<<endl;
            }
            if(number == 3)
            {
                if(present_2>=3 ||  present_3)
                    cout<< "YES"<<endl;
                else
                    cout<<"NO"<<endl;
            }
            if(number == 5)
            {
                if(present_2>=2)
                    cout<< "YES"<<endl;
                else
                    cout<<"NO"<<endl;
            }
            if(number == 1)
            {
                if(present_2)
                    cout<< "YES"<<endl;
                else
                    cout<<"NO"<<endl;
            }
        }
        else
        {
            if(number == 2)
            {
                if(present_2>=8 || (present_2>=2 && present_3>=2) || (present_2>=5 && present_3))
                    cout<< "YES"<<endl;
                else
                    cout<<"NO"<<endl;
            }
            if(number == 4)
            {
                if(present_2>=7 || (present_2>=1 && present_3>=2) || (present_2>=4 && present_3))
                    cout<< "YES"<<endl;
                else
                    cout<<"NO"<<endl;
            }
            if(number == 6)
            {
                if(present_2>=6 || (present_3>=2) || (present_2>=3 && present_3))
                    cout<< "YES"<<endl;
                else
                    cout<<"NO"<<endl;
            }
            if(number == 8)
            {
                if(present_2>=5 || (present_2>=2 && present_3>=1))
                    cout<< "YES"<<endl;
                else
                    cout<<"NO"<<endl;
            }
        }        
    }

    
    

    return 0;
}