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
    ll n;
    cin >> n;
    
    vector<ll> vec(n); readV(vec);
    ll mx = -1;
    for (ll i=0; i<n; i++) {
        for (ll j=1; j<n; j++) {
            if (__gcd(vec[i], vec[j]) == 1) mx = max(mx, i+j+2);
        }
    }
    print(mx);
}

int main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) solve();
}
