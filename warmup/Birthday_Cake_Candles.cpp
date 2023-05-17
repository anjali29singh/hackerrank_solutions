#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    long long arr[n];
    long long maxHeight = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        maxHeight = max(arr[i], maxHeight);
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == maxHeight)
            cnt += 1;
    }
    cout << cnt << '\n';

    return 0;
}