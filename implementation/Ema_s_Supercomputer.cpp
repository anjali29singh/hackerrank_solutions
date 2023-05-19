#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;

    char arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    vector<int> areas;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char curr = arr[i][j];
            int row = i, col = j;
            int l = 0, r = 0, u = 0, d = 0, area = 0;
            // left side
            if (col != 0)
            {
                while (arr[row][col - 1] == curr)
                {
                    l = l + 1;
                    col = col - 1;
                }
            }
            col = j;
            // right side
            if (col != m - 1)
            {
                while (arr[row][col + 1] == curr)
                {
                    r = r + 1;
                    col = col + 1;
                }
            }
            col = j;
            // upper side
            if (row != 0)
            {
                while (arr[row - 1][col] == curr && row >= 0)
                {
                    u = u + 1;
                    row = row - 1;
                }
            }
            row = i;
            // down side
            if (row != n - 1)
            {
                while (arr[row + 1][col] == curr && row <= n - 1)
                {
                    d = d + 1;
                    row = row + 1;
                    if (arr[row][col] != curr)
                        break;
                }
            }
            row = i;
            l = min(l, r);
            u = min(u, d);
            l = min(l, u);
            area = 4 * l + 1;
            areas.push_back(area);
        }
    }
    sort(areas.begin(), areas.end(), greater<int>());
    cout << areas[0] * areas[1] << '\n';

    return 0;
}