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
    ll n, k;
    cin >> n >> k;
    
    vector<ll> a(n); readV(a);
    vector<ll> b;
    ll c = *max_element(a.begin(), a.end());
    for (int i=0; i<k; i++) {
        int x;
        cin >> x;
        ll y = 1LL << x;
        if (y<=c) b.push_back(y);
    }

    for (int i=0; i<b.size(); i++) {
        for (int j=0; j<n; j++) {
            if (a[j]%b[i]==0) a[j] += b[i]/2;
        }
    }
    debug(a);
}

int main() {
    int t = 1;
    cin >> t;
    while (t--) solve();
}