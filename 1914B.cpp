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
    ll n, k;
    cin >> n >> k;

    vector <ll> vec(n);
    for (int i = 0; i < n; i++) {
        vec[i] = i+1;
    }
    vector <ll> reVec(n);
    for (int i = 0; i < n; i++) {
        reVec[i] = n-i;
    }
    if (k == 0) {
        debug(reVec);
        return;
    }
    cout << 1 << " ";
    for (int i = n-k; i < n; i++) cout << vec[i] << " ";
    for (int i = k; i < n-1; i++) cout << reVec[i] << " ";
    nl;
}

int main() {
    ll t;
    cin >> t;

    while (t--) solve();
}