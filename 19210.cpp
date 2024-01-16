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

    vector<pair<long long, long long>> pair(4);
    for (auto &e: pair) cin >> e.first >> e.second;
    
    ll a = 0, b = 0;
    for (int j = 0; j < 4; j++) {
        for (int i = 0; i < 3; i++) {
            a = max(a, abs(pair[i].second - pair[j].second));
            b = max(b, abs(pair[i].first - pair[j].first));
        }
    }

    print(a*b);
    
}

int main() {
    ll t;
    cin >> t;

    while (t--) solve();
}