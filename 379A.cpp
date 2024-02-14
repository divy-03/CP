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
    
    ll cnt=0;
    while (n>=k) {cnt++; n = n-k+1;}
    print(k*(cnt)+n);
}

int main() {
    int t = 1;
    while (t--) solve();
}
