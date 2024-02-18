#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
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
    
    map <ll, ll> freq;
    for (int e: vec) {
        freq[e]++;
    }
    int mx=0;
    for (auto it=freq.begin(); it!=freq.end(); ++it) {
        if (it->second > mx) {
            mx = it-> second;
        }
    }
    cout << mx;
}

int main() {
    int t = 1;
    while (t--) solve();
    return 0;
}
