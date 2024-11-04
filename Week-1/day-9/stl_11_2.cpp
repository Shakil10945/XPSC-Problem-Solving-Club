#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;  
    cin >> n;
    while (n--)
    {
        string st;      
        cin >> st;

        // If the string has only one character
        if (st.size() == 1)
        {
            if (st.back() < 'z')
            {
                st += st.back() + 1; // Append the next character
            }
            else
            {
                st += 'a'; // Append 'a' if it's 'z'
            }
            cout << st << endl;
            continue;
        }

        bool found = false; // Initialize found as false
        string stt;

        // Search for adjacent duplicate characters
        for (int i = 0; i < st.size() - 1; i++)
        {
            if (st[i] == st[i + 1])
            {
                stt += st.substr(0, i + 1); // Copy up to and including the duplicate
                if (stt.back() < 'z')       
                    stt += stt.back() + 1; // Increment last character
                else                    
                    stt += 'a'; // Append 'a' if the last character is 'z'
                stt += st.substr(i + 1); // Append the rest of the original string
                found = true; // Set found to true
                break;
            }
        }

        // If no adjacent duplicates found
        if (!found)
        {
            stt += st; // Copy the original string
            if (st.back() < 'z') 
            {
                stt += st.back() + 1; // Append the incremented last character
            } 
            else 
            {
                stt += 'a'; // Append 'a' if the last character is 'z'
            }
        }

        cout << stt << endl;
    }
    
    return 0;
}
