#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, hack = "hackerrank";
        cin >> s;
        vector<pair<int, char>> vec;
        for (int i = 0; i < s.length(); i++)
        {
            if (hack.find(s[i]) != -1)
            {
                vec.push_back(make_pair(i, s[i]));
            }
        }
        sort(vec.begin(), vec.end());
        string temp = "";
        for (auto i : vec)
        {
            if (i.second != 'r' & i.second != temp[temp.size() - 1])
                temp = temp + i.second;
        }

        // if (temp == hack)
        //     cout << "YES" << '\n';
        // else
        //     cout << "NO" << '\n';
    }
    return 0;
}