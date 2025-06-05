#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int t;
    cin >> t;

    while(t--)
    {
        string str;
        cin>>str;
        int cnt[2] = {0,0};
        for(char c: str)
            cnt[c-'0']++;

        for(int i=0; i<=str.length(); i++)
        {
            if(i==str.length()|| cnt[1-(str[i]-'0')]==0)
            {
                cout<<str.length()-i<<endl;
                break;
            }
            cnt[1-(str[i]-'0')]--;
        }
    }

    return 0;
}