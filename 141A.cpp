#include <bits/stdc++.h>
using namespace std;

#define printnl(a) cout << a << "\n"
#define printab(a, b) cout << a << " " << b << "\n"
#define ll long long

// ACCEPTED

void solve()
{
    string a, b, c, s;
    cin >> a >> b >> c;

    s = a + b;

    sort(s.begin(), s.end());
    sort(c.begin(), c.end());

    if (s == c)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    solve();
}