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
    ll n, k, mxB = 0, mx = 0;
    cin >> n >> k;

    vector <ll> a(n);
    vector <ll> b(n);
    readV(a);
    readV(b);

    for (int i = 0; i < n; i++) {
        mxB = max(mxB, b[i]);
        mx = max(mxB, a[i]);
        // cout << mx << " ";
        printab(mx, mxB);
    }
    nl;
}

int main() {
    ll t;
    cin >> t;

    while (t--) solve();
}