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
    ll n;
    cin >> n;

    vector<ll> vec(n); readV(vec);
    sort(vec.begin(), vec.end());

    for (int i=1; i<n; i++) {
        if (vec[0]<vec[i]) {cout << vec[i]; return;}
    } 
    NO;   
}

int main() {
    solve();
}