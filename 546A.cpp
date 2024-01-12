#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k, l;
    cin >> n >> k >> l;
    int cost;
    int totalCost = 0;

    for (int i = 1; i <= l; i++)
    {
        cost = i * n;
        totalCost += cost;
    }

    if (totalCost <= k)
    {
        cout << 0;
    } else {
        cout << totalCost - k;
    }
}

int main()
{
    int t = 1;

    while (t--)
    {
        solve();
    }
}