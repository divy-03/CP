/*
    excl - grey -> Use Binary Search if array is sorted
*/
#include <bits/stdc++.h>
using namespace std;

typedef int long long ll;
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define print(a) cout << a << "\n"
#define printab(a,b) cout << a << " " << b << "\n"
#define readV(vec) for (auto &e: vec) cin >> e;
#define nl cout << "\n"

void query(const vector<ll> &pre) {
    ll q1, q2;
    cin >> q1 >> q2;

    auto it = lower_bound(pre.begin(), pre.end(), q1);

    if (it != pre.end() && *it < q2) printab(*it, *it+1);
    else print("-1 -1");
}

void solve() {
    ll n; cin >> n;
    
    vector<ll> vec(n); readV(vec);
    vector<ll> pre;

    for (int i=0; i<n-1; i++) {
        if (vec[i]!=vec[i+1]) {
            pre.emplace_back(i+1);
        }
    }
    ll m; cin >> m;
    while (m--) {
        query(pre);
    }
    nl;
}

int main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) solve();
}
