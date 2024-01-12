#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

#define printnl(a) cout << a << "\n"
#define printab(a, b) cout << a << " " << b << "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;
    int lst = 0;
    long long ans = 0;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        if (x > lst)
        {
            ans += x - lst;
        }
        lst = x;
    }
    cout << ans - 1 << "\n";
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