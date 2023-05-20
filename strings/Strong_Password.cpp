#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;

    cin >> n;

    string s;
    cin >> s;
    string num = "0123456789";

    string special_chars = "@!#$%^&*()-+";

    int upper = 0, lower = 0, nums = 0, specials = 0;
    for (auto i : s)
    {
        if (isupper(i))
        {
            upper = 1;
        }
        else if (islower(i))
            lower = 1;
        else if (num.find(i) != -1)
            nums = 1;
        else if (special_chars.find(i) != -1)
            specials = 1;
    }
    int total = upper + lower + nums + specials;
    int k = 4 - total;
    if (n < 6 && n + k >= 6)
    {
        cout << k << '\n';
    }
    else if (n < 6 && n + k < 6)
    {
        cout << 6 - n << '\n';
    }
    else
    {
        cout << k << '\n';
    }
    return 0;
}