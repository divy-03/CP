#include <bits/stdc++.h>
using namespace std;

#define printnl(a) cout << a << "\n"
#define printab(a, b) cout << a << " " << b << "\n"
#define ll long long

// ACCEPTED

void solve()
{
    int n;
    cin >> n;
    int a, b;
    int sum = 0;
    int c = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        c = max(c, sum - a + b);
        // cout << i << ":" << sum << " " << sum - a + b  << " " << c << endl;
        sum = sum - a + b;
    }

    cout << c;
}

int main()
{
    int t = 1;

    while (t--)
    {
        solve();
    }
}