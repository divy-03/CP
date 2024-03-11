/*
    excl - grey
*/
#include <bits/stdc++.h>
using namespace std;

typedef int long long ll;
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define readV(vec) for (auto &e: vec) cin >> e;
#define debug(vec) for (auto &e: vec) {cout << e << " ";} cout << "\n";
#define YES cout << "YES" << "\n"
#define NO cout << "NO" << "\n"

void solve() {
    ll n, a, b;
    cin >> n >> a >> b;
    
    vector <ll> vec;
    for (int i=1; i<=n; i++) {
        ll num = a%i==0 ? a :  a+(i-a%i);
        if (num <= b) vec.emplace_back(num);
        else {NO; return;}
    }
    YES; debug(vec);
}

int main() {
    fastio;
    int t = 1; cin >> t;
    while (t--) solve();
}
