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
    ll n; cin >> n;
    vector<ll> shops(n); readV(shops);
    sort(shops.begin(), shops.end());

    ll m; cin >> m;
    for (int i = 0; i < m; i++) {
        ll money; cin >> money;
        auto it = upper_bound(shops.begin(), shops.end(), money);
        print(it - shops.begin());
    }
}

int main() {
    int t = 1;
    while (t--) solve();
}
