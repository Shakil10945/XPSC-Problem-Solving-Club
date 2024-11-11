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
        vector<int> pos;
        vector<int> neg;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            if (x < 0)
                neg.push_back(x);
            else
                pos.push_back(x);
        }
        sort(pos.begin(), pos.end());
        sort(neg.begin(), neg.end());

        if (neg.size() % 2 == 0)
        {
            int pos_sum = accumulate(pos.begin(), pos.end(), 0);
            int neg_sum = -accumulate(neg.begin(), neg.end(), 0);
            long long summ = pos_sum + neg_sum;
            cout << summ << endl;
        }
        else
        {
            if (!pos.empty())
            {
                if ((-neg[neg.size() - 1]) > pos[0])
                {
                    neg[neg.size() - 1] = -neg[neg.size() - 1];
                    pos[0] = -pos[0];

                    int pos_sum = accumulate(pos.begin(), pos.end(), 0);
                    int neg_sum = -accumulate(neg.begin(), neg.end()-1, 0);
                    //cout << neg_sum + pos_sum << endl;
                    long long summ = neg_sum + pos_sum + neg[neg.size()-1];
                    
                    cout << summ << endl;
                }
                else
                {
                    int pos_sum = accumulate(pos.begin(), pos.end(), 0);
                    if(neg.size()>1)
                    {
                        int neg_sum = -accumulate(neg.begin(), neg.end()-1, 0);
                        //cout << neg_sum + pos_sum + neg[neg.size()-1] << endl;
                        long long summ = neg_sum + pos_sum + neg[neg.size()-1];
                        cout << summ << endl;
                        
                    }
                    if(neg.size() ==1)
                    {
                        //cout << neg[0] + pos_sum << endl;
                        long long summ = neg[0] + pos_sum;
                        cout << summ << endl;

                    }
                }
            }
            else
            {
                int neg_sum = -accumulate(neg.begin(), neg.end()-1, 0);
                //cout << neg_sum + neg[neg.size()-1] << endl;

                long long summ = neg_sum + neg[neg.size()-1];
                cout << summ << endl;
            }
        }
    }
    return 0;
}