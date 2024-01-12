#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define print(a) cout << a << "\n"
#define printab(a, b) cout << a << " " << b << "\n"
#define readV(vec) for (auto &e: vec) cin >> e;
#define debug(vec) for (auto &e: vec) cout << e << " ";
#define nl cout << "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"

void solve() {
    ll n, a;
    cin >> n;

    string str;
    cin >> str;
    vector<int> alpha(256, 0);
    if (n != 5) {
        NO;
        return;
    }

    for (auto ch: str) {
        a = ch;
        alpha[a]++;
    }
    if (alpha[84] == 1 && alpha[105] == 1 && alpha[117] == 1 && alpha[114] == 1 && alpha[109] == 1) YES;
    else NO;
}

int main() {
    ll t;
    cin >> t;

    while (t--) solve();
}