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

const ll N = 5000000 + 1;

vector<ll> divi(N, -1);

void solve() {
    ll n;
    cin >> n;
    
    if (n == 1 || n==4) {
        print("FastestFinger");
        return;
    }
    if (n < 6 || n&1) {
        print("Ashishgup");
        return;
    }
    // if (divi[n] != -1 && divi[n] != n / 2) {
    //     print("Ashishgup");
    // } else {
    //     print("FastestFinger");
    // }
    print(divi[n]);
}

int main() {
    fastio;
    for (ll i = 2; i < N; i++) {
        for (ll j = 2 * i; j < N; j += i) {
            if (i & 1 && divi[j] == -1) {
                divi[j] = i;
            }
        }
    }
    ll t = 1;
    cin >> t;
    while (t--) solve();
}
