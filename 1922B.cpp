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
    
    vector<ll> vec(n+1, 0);
    for (int i = 0, a; i < n; i += 1) {
      cin >> a;
      vec[a]++;
    }
    ll count=0, ans=0;
    // debug(vec);
    for (int i=0; i<=n; i++) {
        ans += (vec[i] * (vec[i] - 1) / 2) * count;
        ans += (vec[i] * (vec[i] - 1) * (vec[i] - 2)) / 6;
        count += vec[i];
        // cout << ans << " ";
    }
    print(ans);
}

int main() {
    int t = 1;
    cin >> t;
    while (t--) {solve();}
}
