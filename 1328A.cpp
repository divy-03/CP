#include <bits/stdc++.h>
using namespace std;

#define printnl(a) cout << a << "\n"
#define printab(a, b) cout << a << " " << b << "\n"
#define ll long long

void solve()
{
    ll a, b;
    cin >> a >> b;

    if (a%b == 0) {
        printnl(0);
        return;
    }

    int div = a/b;
    int ans = (div+1)*b;

    printnl(ans - a);
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