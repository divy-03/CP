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
    
    vector<ll> vec(n); readV(vec);
    ll ans = 0;
 
    sort(vec.begin(), vec.end());
    auto it = unique(vec.begin(), vec.end());
    vec.resize(distance(vec.begin(), it));
    ll newN = it - vec.begin();

    for (int i=0; i+1<newN; i++) {
        auto it2 = upper_bound(vec.begin(), vec.end(), vec[i]+n-1) - vec.begin();
        ll ind = it2-i-1;
        ans = max(ans,ind);
    }
    print(ans+1);
}

int main() {
    int t = 1;
    cin >> t;
    while (t--) solve();
}
