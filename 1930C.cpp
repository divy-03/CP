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

    vector<ll> vec(n);
    
    for (int i=1; i<=n; i++) {
        ll ele; cin >> ele;
        vec[i-1] = ele+i;
    }

    sort(vec.rbegin(),vec.rend());
    for (int i=0; i<n-1; i++) {
        if (vec[i]<=vec[i+1]) {
            vec[i+1] = vec[i]-1;
        };
    }

    debug(vec);
}

int main() {
    int t = 1;
    cin >> t;
    while (t--) solve();
}
