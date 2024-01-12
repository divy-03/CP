#include <bits/stdc++.h>
using namespace std;

#define printnl(a) cout << a << "\n"
#define printab(a, b) cout << a << " " << b << "\n"
#define ll long long

void solve()
{
    int n, pow;
    cin >> n >> pow;

    vector<pair<ll, ll>> monster(n);

    for (auto &pr : monster)
    {
        cin >> pr.second;
    }
    for (auto &pr : monster)
    {
        cin >> pr.first;
    }

    sort(monster.begin(), monster.end());

    for (int i = 0; i < n; i++) printab(monster[i].first, monster[i].second);
    
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