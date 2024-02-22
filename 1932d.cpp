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
    ll n;
    cin >> n;

    char chr;
    cin >> chr;
    map<char, vector<ll>> cards;

    for (int i = 0; i < 2 * n; i++) {
        string str;
        cin >> str;
        char suit = str[1];
        char rank = str[0];

        if (suit == 'C' || suit == 'S' || suit == 'D' || suit == 'H') {
            cards[suit].push_back(rank - '0');
        }
    }

    for (auto &k : cards) {
        sort(k.second.begin(), k.second.end());
    }

    // for (const auto& k : cards) {
    //     cout << k.first << ": ";
    //     for (ll rank : k.second) {
    //         cout << rank << " ";
    //     }
    //     cout << endl;
    // }

    for (ll rank: cards[chr]) {
        
    }
}

int main() {
    int t = 1;
    cin >> t;
    while (t--) solve();
}
