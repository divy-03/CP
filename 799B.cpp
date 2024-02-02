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
    ll n; cin >> n;

    vector<pair<ll, pair<ll, ll>>> pair(n);
    for (auto &e: pair) cin >> e.first;
    for (auto &e: pair) cin >> e.second.first;
    for (auto &e: pair) cin >> e.second.second;

    ll m; cin >> m;
    vector<ll> c(m); readV(c);

    sort(pair.begin(), pair.end());

    for (int j=0; j<m; j++) {
        for (int i=0; i<=n; i++) {
            if (i==n) {cout << -1 << " "; break;}
            if (c[j]==pair[i].second.first || c[j]==pair[i].second.second) {
                cout << pair[i].first << " ";
                pair[i].second.first=0;
                pair[i].second.second=0;
                break;
            }
        }
    }
}

int main() {
    solve();
}