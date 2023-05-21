#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int n = s.length();
    int ans = 0, ind = 0;
    while (ind < n)
    {
        string str = "SOS", t = "";
        t = t + s[ind] + s[ind + 1] + s[ind + 2];
        for (int i = 0; i < 3; i++)
        {
            if (str[i] != t[i])
                ans = ans + 1;
        }
        ind = ind + 3;
    }
    cout << ans << '\n';

    return 0;
}