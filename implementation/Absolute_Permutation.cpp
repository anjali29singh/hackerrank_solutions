#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {

        int n, k;
        cin >> n >> k;
        int arr[n + 1];
        for (int i = 1; i <= n; i++)
            arr[i] = 0;
        if (k == 0)
        {
            for (int i = 1; i <= n; i++)
                cout << i << " ";
            cout << '\n';
        }
        else if ((n % 2 != 0 && k != 0) || (n % 2 == 0 && n % k != 0))
            cout << -1 << '\n';
        else if (n % 2 == 0 && n % k == 0)
        {
            int x = n / k;
            if (x % 2 == 0)
            {
                for (int i = 1; i <= n - k; i++)
                {
                    if (arr[i] == 0)
                    {
                        arr[i] = i + k;
                        arr[i + k] = i;
                    }
                }
                for (int i = 1; i <= n; i++)
                    cout << arr[i] << " ";
                cout << '\n';
            }
            else
            {

                cout << -1 << '\n';
            }
        }
    }
    return 0;
}