/*
    excl - grey
*/
#include <bits/stdc++.h>
using namespace std;

typedef int long long ll;
#define print(a) cout << a << "\n";
#define printab(a,b) cout << a << " " << b << "\n";
#define readV(vec) for (auto &e: vec) cin >> e;
#define debug(vec) for (auto &e: vec) {cout << e << " ";} cout << "\n";
#define nl cout << "\n"
#define YES cout << "YES" << "\n"
#define NO cout << "NO" << "\n"

const int N = 100005;

void solve() {
    ll m, k, a1, ak;
    cin >> m >> k >> a1 >> ak;

    // ll t = max(0LL, min(m / k, (m - a1 + k - 1) / k));
    // ll ans = max(0LL, t - ak) + max(0LL, m - t * k - a1);
    // print(ans);
}

int main() {
    int t = 1;
    cin >> t;
    while (t--) solve();
}
