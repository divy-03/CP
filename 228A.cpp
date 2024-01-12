#include <bits/stdc++.h>
using namespace std;

#define printnl(a) cout << a << "\n"
#define printab(a, b) cout << a << " " << b << "\n"
#define ll long long

void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int count = 0;

    if (a == b) count++;
    if (b == c) count++;
    if (c == d) count++;
    if (a == d) count++;
    if (a == c) count++;
    if (b == d) count++;

    if (count > 2) if (count == 3) cout << 2; else cout << 3;
    else cout << count;
}

int main()
{
    int t = 1;

    while (t--)
    {
        solve();
    }
}