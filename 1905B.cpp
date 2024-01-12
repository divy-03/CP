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
    ll n, ans = 0;
    cin >> n;

    vector <ll> freq(n, 0);
    for (int i = 0; i < 2*(n-1); i++) {
        ll e;
        cin >> e;  
        freq[e-1]++;      
    }
    for (auto &e: freq) if (e==1) ans++;
    print((ans/2)+1);
}

int main() {
    ll t;
    cin >> t;
    while (t--) solve();
}