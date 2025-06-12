#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;  cin>>n;
        map<string, int> freq;
        long long totalPairs = 0;

        for(int i=0; i<n; i++)
        {
            string str;
            cin>>str;

            for(int j=0; j<2; j++)
            {
                for(char ch = 'a'; ch <='k'; ch++)
                {
                    if(str[j]==ch)
                        continue;
                    string modified = str;
                    modified[j] = ch;

                    totalPairs+= freq[modified];
                }
            }
            freq[str]++;
        }
        cout<<totalPairs<<endl;
    }

    return 0;
}

