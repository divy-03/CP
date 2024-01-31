#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define print(a) cout << a << "\n"
#define printab(a, b) cout << a << " " << b << "\n"
#define readV(vec) for (auto &e: vec) cin >> e;
#define debug(vec) for (auto &e: vec) cout << e << " ";
#define nl cout << "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"

void solve() {
    ll n;
    cin >> n;

    vector<pair<int, int>> pairs(n);
    for (auto &e: pairs) cin >> e.first;
    for (auto &e: pairs) cin >> e.second;
    
    sort(pairs.begin(), pairs.end());

    for (auto &e: pairs) cout << e.first << " ";nl;
    for (auto &e: pairs) cout << e.second << " ";nl;
    
}

int main() {
    ll t;
    cin >> t;

    while (t--) solve();
}
