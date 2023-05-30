#include <bits/stdc++.h>
using namespace std;

int main()
{

    int q;
    cin >> q;
    while (q--)
    {

        string s;
        cin >> s;
        int len = s.length();
        if (len % 2 != 0)
        {
            cout << -1 << endl;
        }
        else
        {

            int k = len / 2;
            int ans = 0;
            int arr1[26] = {0};
            int arr2[26] = {0};
            for (int i = 0; i < k; i++)
            {
                arr1[s[i] - 97] += 1;
            }

            for (int j = k; j < len; j++)
            {
                arr2[s[j] - 97] += 1;
            }

            for (int i = 0; i < 26; i++)
            {
                if (arr1[i] != 0 || arr2[i] != 0)
                {
                    ans = ans + abs(arr1[i] - arr2[i]);
                }
            }

            ans = ans / 2;
            cout << ans << endl;
        }
    }
    return 0;
}