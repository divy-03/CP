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
    ll k, x, a;
    cin >> k >> x >> a;
    
    ll v = a-x+1;
    if (a-x+k > a && a-x > 0) YES;
    else NO;
}

int main() {
    int t = 1;
    cin >> t;
    while (t--) solve();
}
