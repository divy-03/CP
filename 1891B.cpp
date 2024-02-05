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
    ll n, k;
    cin >> n >> k;

    vector<ll> a(n); readV(a);
    vector<ll> b(k);
    for (auto &e: b) {
        int a;
        cin >> a;
        e = 1LL << a;
    }

    vector<ll> additions(64, 0);  // Precompute the values to be added for each bit position

    for (int i = 0; i < k; i++) {
        for (int j = 0; j < 64; j++) {
            if ((b[i] >> j) & 1) {
                additions[j] += b[i] / 2;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 64; j++) {
            if ((a[i] >> j) & 1) {
                a[i] += additions[j];
            }
        }
    }

    debug(a);
}

int main() {
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}
            