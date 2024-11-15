#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, m;
    cin >> n >> m;

    map<string, string> mymap;
    while (n--)
    {
        string st, stt;
        cin >> st >> stt;

        mymap[stt] = st;
    }

    while (m--)
    {
        string st, stt;
        cin >> st >> stt;

        stt.pop_back();

        cout << st << " " << stt << ";" << " #" << mymap[stt] << endl;
    }

    return 0;
}