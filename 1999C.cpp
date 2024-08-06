/*
    excl - grey
*/
#include <bits/stdc++.h>
using namespace std;

typedef int long long ll;
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define print(a) cout << a << "\n"
#define printab(a,b) cout << a << " " << b << "\n"
#define readV(vec) for (auto &e: vec) cin >> e;
#define debug(vec) for (auto &e: vec) {cout << e << " ";} cout << "\n";
#define nl cout << "\n"
#define YES {cout << "YES" << "\n"; return;}
#define NO {cout << "NO" << "\n"; return;}

const int N = 100005;

void solve() {
    ll n, m, t, q, r;
    cin >> n >> m >> t >> q;
    bool ans = false;
    if (q >= m) ans = true;

    for (int i=0; i<n-1; i++) {
        ll a, b;
        cin >> a >> b;
        if (b-a >= m) ans = true;
    }
    cin >> r;
    if (t-r >= m) ans = true;
    if (ans) YES;
    NO;
}

int main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) solve();
}
