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
    ll n, mx = 0, idx;
    cin >> n;

    vector <pair <ll, ll>> p(n);
    for (auto &e: p) cin >> e.first >> e.second;
    for (int i = 0; i < n; i++) {
        if (p[i].first < 11) {
            mx = max(p[i].second, mx);
            if (mx == p[i].second) {
                idx = i;
            }
        }
    }
    print(idx+1);
}

int main() {
    ll t;
    cin >> t;

    while (t--) solve();
}