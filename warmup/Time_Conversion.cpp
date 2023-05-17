#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;

    if (s.substr(8, 2) == "AM")
    {
        if (s.substr(0, 2) == "12")
        {
            cout << "00" << s.substr(2, 6) << '\n';
        }
        else
            cout << s.substr(0, 8) << '\n';
    }
    else
    {
        string hr = s.substr(0, 2), min = s.substr(3, 2), sec = s.substr(6, 2);
        int hour = stoi(hr);
        hour = 12 + hour;
        if (hour == 24)
            hour = 12;
        cout << hour << ":" << min << ":" << sec << '\n';
    }
    return 0;
}