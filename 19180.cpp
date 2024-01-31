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

    if (k%2) print(n*(k-1)/2);
    else print(n*k/2);
}

int main() {
    ll t;
    cin >> t;

    while (t--) solve();
}