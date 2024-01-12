#include <bits/stdc++.h>
using namespace std;

#define printnl(a) cout << a << "\n"
#define printab(a, b) cout << a << " " << b << "\n"
#define ll long long

int solve()
{
    int n, total = 0, myC = 0;
    cin >> n;
    vector<int> coins(n);
    for (auto &coin : coins)
    {
        cin >> coin;
        total += coin;
    }

    sort(coins.begin(), coins.end(), greater<int>());

    for (int i = 0; i < n; i++)
    {
        myC += coins[i];
        if (myC > total - myC)
        {
            return i + 1;
        }
    }
    return -1;
}

int main()
{
    cout << solve();
}