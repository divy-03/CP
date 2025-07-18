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

bool check(int a, int b, int t) {
    if (a == t || b == t) return true;
    if (a == 0 && b == 0) return false;
    return check((a*2)/3, a/3, t);
}

void solve() {
    ll n, t;
    cin >> n >> t;
    
    if (n==t) {YES; return;}
    if (t>n) {NO; return;}
    if (check((n*2)/3, n/3, t)) YES;
    else NO;
}

int main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) solve();
}
