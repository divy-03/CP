#include <bits/stdc++.h>
using namespace std;

typedef int long long ll;
#define print(a) cout << a << "\n"
#define printab(a, b) cout << a << " " << b << "\n"
#define readV(vec) for (auto &e: vec) cin >> e;
#define debug(vec) for (auto &e: vec) cout << e << " ";
#define nl cout << "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"

void solve() {
    ll n;
    cin >> n;

    vector <pair <ll, ll>> pair(n);

    for (auto &e: pair) {
        cin >> e.first >> e.second;
    }

    ll tot = 0;
    ll start = 0, end = LONG_LONG_MAX, eq = 0;
    for (auto &e: pair) {
        if (e.first == 1) {
            start = max(e.second, start); 
        }
        if (e.first == 2) {
            end = min(e.second, end);
        }
    }
    for (auto &e: pair) {
        if (e.first == 3) {
            if (e.second >= start && e.second <= end)
            eq++;
        }
    }
    ll ans = end - start - eq + 1;
    if (ans > 0) print(ans);
    else print(0);
    start = 0;
    end = LONG_LONG_MAX;
    eq = 0;
}

int main() {
    ll t;
    cin >> t;

    while (t--) solve();
}