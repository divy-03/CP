#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

#define printnl(a) cout << a << "\n"
#define printab(a, b) cout << a << " " << b << "\n"
#define ll long long

void solve()
{
    ll n, m;
    cin >> n >> m;
    ll arr[m];

    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }

    ll count = arr[0] - 1;

    // cout << count;

    for (ll i = 1; i < m; i++)
    {
        if (arr[i - 1] < arr[i])
        {
            count = arr[i] - arr[i - 1] + count;
        }
        else if (arr[i - 1] > arr[i])
        {
            count = n - arr[i - 1] + arr[i] + count;
        }
    }

    cout << count;
}

int main()
{
    solve();
}