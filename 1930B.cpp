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
    
    vector<ll> vec;
    // vec.push_back(1);
    // vec.push_back(a);
    // for (int i=n; i>=2; i--) {
    //     if (i&1) vec.push_back(i);
    // }
    // for (int i=2; i<n-1; i++) if (i%2==0) vec.push_back(i);  
    ll a = 2, b = n&1 ? n : n-1;
    for (int i=1; i<n; i++) {
        if (i%2==0) {
            cout << b << " ";
            b = b - 2;
        }
        else {
            cout << a << " ";
            a = a + 2;
        }
    }
    cout << 1;
    nl;
    // vector <ll> cnt(n);
    // for (auto &e: vec) cnt[e-1]++;
    // debug(cnt);
}

int main() {
    int t = 1;
    cin >> t;
    while (t--) solve();
}
