#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int alice[3];
    int bob[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> alice[i];
    }
    for (int i = 0; i < 3; i++)
        cin >> bob[i];

    int pa = 0, pb = 0;
    for (int i = 0; i < 3; i++)
    {
        if (alice[i] < bob[i])
            pb = pb + 1;
        else if (alice[i] > bob[i])
            pa = pa + 1;
    }
    cout << pa << " " << pb << '\n';
    return 0;
}