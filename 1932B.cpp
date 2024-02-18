/*
    excl - grey
*/
#include <bits/stdc++.h>
using namespace std;

typedef int long long ll;
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
    
    vector<ll> vec(n);
    ll a, b, x; cin >> a;
    for (int i=1; i<n; i++) {
        cin >> b;
        x = a+b - (a+b)%b;
        a = x;
    }
    if (n!=1) print(x);
    else print(a);

}
int main() {
    int t = 1;
    cin >> t;
    while (t--) solve();
}
