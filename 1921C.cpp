#include <bits/stdc++.h>
using namespace std;

typedef int long long ll;
#define print(a) cout << a << "\n"
#define printab(a, b) cout << a << " " << b << "\n"
#define readV(vec) for (auto &e: vec) cin >> e;
#define debug(vec) for (auto &e: vec) cout << e << " ";
#define nl cout << "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"

void solve() {
    ll n, f, a , b;
    cin >> n >> f >> a >> b; 

    vector<long long> vec(n);
    for (auto &e: vec) cin >> e;
    

    sort(vec.begin(), vec.end());

    f = a*vec[0] >= b ? f - b : f - a*vec[0];

    for (int i = 0; i < n-1; i++) {
        if (a*(vec[i+1]-vec[i]) >= b) {
            f = f - b;
        } else {
            f = f - a*(vec[i+1] - vec[i]);
        }
    }
    if (f>0) YES;
    else NO;
}

int main() {
    ll t;
    cin >> t;

    while (t--) solve();
}