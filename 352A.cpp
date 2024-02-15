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
    
    vector<ll> vec(2);
    for (int i=0; i<n; i++) {
        int a; cin >> a; vec[a==5]++;
    }
    if (vec[0]==0) {print(-1); return;}
    if (vec[1]<9) {print(0); return;}
    for (int i=0; i<(vec[1]/9)*9; i++) cout << '5';
    for (int i=0; i<vec[0]; i++) cout << '0';
}

int main() {
    int t = 1;
    while (t--) solve();
}
