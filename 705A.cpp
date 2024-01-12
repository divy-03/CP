#include <bits/stdc++.h>
using namespace std;

#define printnl(a) cout << a << "\n"
#define printab(a, b) cout << a << " " << b << "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            cout << "I hate ";
        }
        else
        {
            cout << "I love ";
        }
        if (i != n)
            cout << "that ";
    }

    cout << "it ";
}

int main()
{
    int t = 1;

    while (t--)
    {
        solve();
    }
}