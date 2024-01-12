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
    ll n, cntFP = 0, cntFN = 0, cntSP = 0, cntSN = 0;
    cin >> n;

    vector <pair <ll, ll>> point(n);

    for (auto &e: point) cin >> e.first >> e.second;
    for (auto&e: point) {
        if (e.first > 0) cntFP++;
        if (e.first < 0) cntFN++;
        if (e.second > 0) cntSP++;
        if (e.second < 0) cntSN++;
    }
    if (cntFN==0||cntFP==0||cntSN==0||cntSP==0) YES;
    else NO;
}

int main() {
    ll t;
    cin >> t;

    while (t--) solve();
}