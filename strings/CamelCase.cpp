#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    int cnt = 1;
    for (int i = 0; i < s.length(); i++)
    {
        if (isupper(s[i]))
        {
            cnt = cnt + 1;
        }
    }
    cout << cnt << '\n';

    return 0;
}