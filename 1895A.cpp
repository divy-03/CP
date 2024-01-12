#include <bits/stdc++.h>
using namespace std;

#define printnl(a) cout << a << "\n"
#define printab(a, b) cout << a << " " << b << "\n"
#define ll long long

void solve()
{
    int x, y, k;
    cin >> x >> y >> k;

    if (x > y)
    {
        cout << x << endl;
    }
    else
    {
        int a = x + k;
        if (a > y)
        {
            cout << y << endl;
        }
        else
        {
            int ans = 2 * y - a;
            cout << ans << endl;
        }
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