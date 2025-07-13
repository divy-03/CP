/*
    excl - grey
*/
#include <bits/stdc++.h>
using namespace std;

typedef int long long ll;
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define print(a) cout << a << "\n"
#define printab(a,b) cout << a << " " << b << "\n"
#define readV(vec) for (auto &e: vec) cin >> e;
#define debug(vec) for (auto &e: vec) {cout << e << " ";} cout << "\n";
#define nl cout << "\n"
#define YES cout << "YES" << "\n"
#define NO cout << "NO" << "\n"

const int N = 100005;

void solve() {
    int n = 3;
    vector<ll> l(4), b(4);
    while (n--) cin >> l[n] >> b[n];

    sort(l.begin(), l.end());
    sort(b.begin(), b.end());

    if ((l[1] == l[2] && l[2] == l[3]) || b[1] == b[2] && b[2] == b[3]) YES;
}

int main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) solve();
}
