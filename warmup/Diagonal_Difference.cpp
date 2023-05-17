#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int arr[n][n];
    int d1 = 0, d2 = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
            if (i == j)
            {
                d1 = d1 + arr[i][j];
            }
            if (i + j == (n - 1))
            {
                d2 = d2 + arr[i][j];
            }
        }
    }
    int ans = abs(d1 - d2);
    cout << ans << '\n';
    return 0;
}