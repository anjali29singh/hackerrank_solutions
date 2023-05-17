#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int arr[n];
    int b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        b[i] = arr[i];
    }

    sort(b, b + n);
    int cnt = 0, l = 0, r = 0, L = 0, R = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != b[i])
        {
            cnt = cnt + 1;
            r = i;
            if (cnt == 1)
                l = i;
        }
    }
    R = r + 1;
    L = l + 1;
    if (cnt == 0)
    {
        cout << "yes" << '\n';
    }
    else if (cnt == 2)
    {
        cout << "yes" << '\n';
        cout << "swap"
             << " " << L << " " << R << '\n';
    }
    else
    {
        while (l < r)
        {
            swap(arr[l], arr[r]);
            l = l + 1;
            r = r - 1;
        }
        if (equal(arr, arr + n, b))
        {
            cout << "yes" << '\n';

            cout << "reverse"
                 << " " << L << " " << R << endl;
        }
        else
        {
            cout << "no" << '\n';
        }
    }

    return 0;
}