#include <bits/stdc++.h>
using namespace std;

#define printnl(a) cout << a << "\n"
#define printab(a, b) cout << a << " " << b << "\n"
#define ll long long

void solve()
{
    int n, x, diff;
    cin >> n >> x;
    vector <int> stations(n);
    for (auto &station : stations) cin >> station;

    int maxDiff = 0;
    for (int i = 0; i < n-1; i++) {
        diff = abs(stations[i] - stations[i+1]);
        maxDiff = max(diff, maxDiff);
        // cout << maxDiff << " " ;
    }
    maxDiff = max(stations[0], maxDiff);
    maxDiff = max(abs(2*(stations[n-1] - x)), maxDiff);
    cout << maxDiff << endl;
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