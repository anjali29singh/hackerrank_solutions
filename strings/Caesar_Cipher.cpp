#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n;
    string s;
    cin >> s;
    cin >> k;
    k = k % 26;

    string up = "ABCDEFGHIJKLMNOPQRSTUVWXYZ",
           low = "abcdefghijklmnopqrstuvwxyz";
    string ans = "";
    for (int i = 0; i < n; i++)
    {
        int x = int(s[i]);
        if (isupper(s[i]))
        {
            x = x - 65;
            x = x + k;
            if (x >= 26)
                x = x - 26;
            ans = ans + up[x];
            continue;
        }
        else if (islower(s[i]))
        {
            x = x - 97;
            x = x + k;
            if (x >= 26)
            {
                x = x - 26;
            }
            ans = ans + low[x];
            continue;
        }
        ans = ans + s[i];
    }

    cout << ans << '\n';

    return 0;
}