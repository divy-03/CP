/*
    excl - grey
*/
#include <bits/stdc++.h>
using namespace std;

typedef int long long ll;
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define print(a) cout << a << "\n";
#define printab(a,b) cout << a << b << "\n";
#define readV(vec) for (auto &e: vec) cin >> e;
#define debug(vec, chr) for (auto &e: vec) {cout << e << chr << " ";} cout << "\n";
#define nl cout << "\n"

void solve() {
    ll n; cin >> n;

    char chr; cin >> chr;
    map<char, vector<ll>> cards;
    vector<ll> trup;

    for (int i = 0; i < 2 * n; i++) {
        string str; cin >> str;
        char suit = str[1];
        int rank = str[0] - '0';
        if (suit == chr) trup.push_back(rank);
        if (suit != chr) cards[suit].push_back(rank);
    }

    for (auto &k : cards) sort(k.second.begin(), k.second.end());
    sort(trup.begin(), trup.end());

    ll cnt = 0;
    for (const auto& k: cards) if (k.second.size()&1) cnt++;

    if (cnt > trup.size()) {print("IMPOSSIBLE"); return;}

    for (const auto& k : cards) {
        for (ll rank : k.second) cout << rank << k.first << " ";
        if (k.second.size()&1 && !trup.empty()) {printab(trup.back(), chr); trup.pop_back();}
        else nl;
    }
    if (!trup.empty()) debug(trup, chr);
}

int main() {
    fastio;
    int t = 1; cin >> t;
    while (t--) solve();
}
