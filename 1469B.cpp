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
    vector<ll> a(n); readV(a);
    ll m;
    cin >> m;
    vector<ll> b(m); readV(b);
    partial_sum(a.begin(), a.end(), a.begin());
    partial_sum(b.begin(), b.end(), b.begin());
    ll p = *max_element(a.begin(), a.end());    
    ll q = *max_element(b.begin(), b.end());    
    print(max(0LL, p) + max(0LL, q));
}

int main() {
    int t = 1;
    cin >> t;
    while (t--) solve();
}
