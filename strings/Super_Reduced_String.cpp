#include <bits/stdc++.h>
using namespace std;

bool ispresent(string s)
{
    int x = s.length();
    for (int i = 0; i < x; i++)
    {
        if (s[i] == s[i + 1])
            return true;
    }

    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    while (ispresent(s))
    {
        int n = s.length();
        for (int i = 0; i < n; i++)
        {
            if (s[i] == s[i + 1])
            {
                s.erase(i, 2);
            }
        }
    }
    if (s.length() == 0)
    {
        cout << "Empty String" << '\n';
    }
    else
    {
        cout << s << '\n';
    }
    cout << '\n';
}