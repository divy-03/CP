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
    ll n, j, k;
    cin >> n >> j >> k;

    vector<ll> vec(n); readV(vec);
    int a = vec[j-1];

    sort(vec.rbegin(), vec.rend());
    for (int i = 0; i<k; i++) {
        if (vec[i] == a) {YES; return;}
        if (vec[i] == vec[i-1]) k++;
    }
    NO;
}

int main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) solve();
}
