#include <bits/stdc++.h>
using namespace std;

typedef int long long ll;
#define printnl(a) cout << a << "\n"
#define printab(a, b) cout << a << " " << b << "\n"
#define readV(vec) for (auto &e: vec) cin >> e;
#define debug(vec) for (auto &e: vec) cout >> e;
#define nl cout << "\n";

void solve() {
    ll n, h, mnT = 0, mx = 0;
    cin >> n;
    vector <ll> bless(n);

    while (n--) {
        cin >> h;
        mnT += h;
    }

    for (auto &b: bless) {
        cin >> b;
        mnT += b;
        mx = max(b, mx);
    }
    cout << mnT - mx;
    nl;
}

int main() {
    ll t;
    cin >> t;

    while (t--) solve();
}