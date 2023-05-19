#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long r, c, n;
    cin >> r >> c >> n;

    char arr[r + 2][c + 2];

    vector<pair<int, int>> vec;
    vector<pair<int, int>> sec;

    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {

            cin >> arr[i][j];
            if (arr[i][j] == 'O')
            {
                vec.push_back(make_pair(i, j));
            }
        }
    }

    long long x = (n - 3) % 4, y = (n - 1) % 4;

    if (n < 2)
    {

        for (int i = 1; i <= r; i++)
        {
            for (int j = 1; j <= c; j++)
                cout << arr[i][j];
            cout << '\n';
        }
    }
    else if (n == 2 || n % 2 == 0)
    {

        for (int i = 1; i <= r; i++)
        {
            for (int j = 1; j <= c; j++)
            {
                cout << 'O';
            }
            cout << '\n';
        }
    }
    else
    {

        for (int i = 1; i <= r; i++)
        {
            for (int j = 1; j <= c; j++)
            {
                arr[i][j] = 'O';
            }
        }
        for (auto i : vec)
        {
            int row = i.first, col = i.second;
            arr[row][col] = '.';
            arr[row][col - 1] = '.';
            arr[row][col + 1] = '.';
            arr[row - 1][col] = '.';
            arr[row + 1][col] = '.';
        }

        for (int i = 1; i <= r; i++)
        {
            for (int j = 1; j <= c; j++)
            {
                if (arr[i][j] == 'O')
                {
                    sec.push_back(make_pair(i, j));
                }
            }
        }

        if (x == 0)
        {
            for (int i = 1; i <= r; i++)
            {
                for (int j = 1; j <= c; j++)
                {
                    cout << arr[i][j];
                }
                cout << '\n';
            }
        }

        else if (y == 0)
        {
            for (int i = 1; i <= r; i++)
            {
                for (int j = 1; j <= c; j++)
                    arr[i][j] = 'O';
            }
            for (auto i : sec)
            {
                int rw = i.first, cl = i.second;
                arr[rw][cl] = '.';
                arr[rw][cl - 1] = '.';
                arr[rw][cl + 1] = '.';
                arr[rw - 1][cl] = '.';
                arr[rw + 1][cl] = '.';
            }
            for (int i = 1; i <= r; i++)
            {
                for (int j = 1; j <= c; j++)
                    cout << arr[i][j];
                cout << '\n';
            }
        }
    }

    return 0;
}