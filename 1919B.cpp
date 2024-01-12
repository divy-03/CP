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
    ll n, cntN = 0, cntP = 0;
    cin >> n;
    string str;
    cin >> str;

    for (auto &ch: str) {
        if (ch == '+') cntP++;
        else cntN++;
    }    
    print(n-2*min(cntN, cntP));
}

int main() {
    ll t;
    cin >> t;

    while (t--) solve();
}