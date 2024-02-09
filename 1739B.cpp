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

const int N = 100005;

void solve() {
    ll n;
    cin >> n;
    
    vector<ll> vec(n);
    cin >> vec[0];
    for (int i=1; i<n; i++) {
        int a; cin >> a;
        if (a>=vec[i-1] || a==0) {vec[i] = vec[i-1] + a;}
        else {print(-1); return;}
    }
    debug(vec);
}

int main() {
    int t = 1;
    cin >> t;
    while (t--) solve();
}
