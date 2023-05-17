#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    double n;
    cin >> n;
    double cp = 0, cn = 0, cz = 0;
    for (auto i = 0; i < n; i++)
    {

        double x;
        cin >> x;
        if (x < 0)
            cn = cn + 1;
        else if (x == 0)
            cz = cz + 1;
        else
            cp = cp + 1;
    }
    double ap = cp / n, an = cn / n, az = cz / n;
    cout << fixed << setprecision(6);
    cout << ap << '\n';
    cout << an << '\n';
    cout << az << '\n';
    return 0;
}