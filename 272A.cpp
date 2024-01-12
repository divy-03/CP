#include <bits/stdc++.h>
using namespace std;

#define printnl(a) cout << a << "\n"
#define printab(a, b) cout << a << " " << b << "\n"
#define ll long long

void solve()
{
    int n, a, z;
    cin >> n;
    int sum = 0;
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        sum += a;
    }
    // cout << "sum is " << sum;

    int b = sum % (n + 1);
    // cout << b;
    if (n != 1)
    {
        for (int i = 1; i <= 5; i++)
        {
            if ((b + i) % (n + 2) == 0 || (b + i) % ((2 * (n + 1)) + 1) == 0)
            {
                // cout << i << " ";
                ans++;
            }
            // cout << i << (b+i)%(n+2) << " ";
            // cout << i << (b + i) % ((2 * (n + 1)) + 1) << " ";
        }
    }
    else
    {
        for (int i = 1; i < 6; i++)
        {
            if ((sum + i) % 2 != 0)
            {
                // cout << i << " ";
                ans++;
            }
        }
    }

    cout << 5 - ans;
}

int main()
{
    int t = 1;

    while (t--)
    {
        solve();
    }
}