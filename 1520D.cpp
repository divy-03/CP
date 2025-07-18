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

ll ans(int n) {
    if (n == 0 || n == 1) return 1;
    else return n + ans(n - 1);
}

void solve() {
    ll n;
    cin >> n;
    
    vector<int> vec(n);
    vector<int> cnt(2*n);
    for (int i=0; i<n; i++) {
        int a; cin >> a;
        vec[i] = a-i;
        cnt[n+vec[i]-1]++;
    }
    ll a=0;
    for (auto e: cnt) if (e>1) a += ans(e-1);
    print(a);
}

int main() {
    int t = 1;
    cin >> t;
    while (t--) solve();
}
