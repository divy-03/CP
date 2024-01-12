#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int b, c, h;
    cin >> b >> c >> h;

    if (c + h >= b)
    {
        cout << 2 * b - 1 << endl;
    }
    else
    {
        cout << 2 * (c + h) + 1 << endl;
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
}