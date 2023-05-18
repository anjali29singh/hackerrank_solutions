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
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int cnt = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            for (int j = 0; j < i; j++)
            {
                if (arr[j] > arr[i])
                    cnt++;
            }
        }
        if (cnt % 2 == 0)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
    return 0;
}
