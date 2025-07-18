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
    ll n, mn = INT_MAX;
    cin >> n;
    
    while (n!=0) {
        ll dig = n%10;
        n = n/10;
        mn = min(mn, dig);
    }
    print(mn);
}

int main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) solve();
}
