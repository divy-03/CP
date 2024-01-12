#include <bits/stdc++.h>
using namespace std;

#define printnl(a) cout << a << "\n"
#define printab(a, b) cout << a << " " << b << "\n"
#define ll long long

void solve()
{
    ll n, m, h;
    cin >> n >> m;

    if (n % 2 == 0)
    {
        h = n / 2;
    }
    else
    {
        h = (n / 2) + 1;
    }

    if (m <= h)
    {
        cout << (m * 2) - 1;
    }
    else
    {
        cout << (m - h) * 2;
    }
}

int main()
{
    solve();
}