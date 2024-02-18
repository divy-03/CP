#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define print(a) cout << a << "\n";
#define printab(a,b) cout << a << " " << b << "\n";
#define readV(vec) for (auto &e: vec) cin >> e;
#define debug(vec) for (auto &e: vec) {cout << e << " ";} cout << "\n";
#define nl cout << "\n"
#define YES cout << "YES" << "\n"
#define NO cout << "NO" << "\n"

const int N = 100005;

void solve() {
    ll n; cin >> n;
    vector<ll> a(n);
    cin >> a[0];
    for (int i = 0; i < n - 1; i++) {
        ll x; cin >> x;
        a[i + 1] = a[i] + x;
    }
    ll m; cin >> m;
    vector<ll> b(m);
    cin >> b[0];
    for (int i = 0; i < m - 1; i++) {
        ll x; cin >> x;
        b[i + 1] = b[i] + x;
    }
    ll p=0, q=0;
    for (auto &e: a) p = max(p, e);
    for (auto &e: b) q = max(q, e);
    print(p+q);
}

int main() {
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}
