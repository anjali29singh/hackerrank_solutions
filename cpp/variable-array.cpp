#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> arr[n];
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        for (int j = 0; j < x; j++)
        {
            int k;
            cin >> k;
            arr[i].push_back(k);
        }
    }
    for (int i = 0; i < q; i++)
    {
        int a, b;
        cin >> a >> b;
        cout << '\n';
        cout << arr[a][b] << endl;
        }

    return 0;
}