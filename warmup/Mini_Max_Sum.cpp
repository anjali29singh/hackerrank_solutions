#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long arr[5];
    for (int i = 0; i < 5; i++)
        cin >> arr[i];
    sort(arr, arr + 5);
    long long minsum = 0, maxsum = 0;
    minsum = arr[0] + arr[1] + arr[2] + arr[3];
    maxsum = arr[1] + arr[2] + arr[3] + arr[4];
    cout << minsum << " " << maxsum << '\n';
    return 0;
}