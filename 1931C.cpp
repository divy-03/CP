/*
    excl - grey
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define print(a) cout << a << "\n";
#define printab(a,b) cout << a << " " << b << "\n";
#define readV(vec) for (int i = 0; i < vec.size(); ++i) cin >> vec[i];
#define debug(vec) for (auto &e: vec) {cout << e << " ";} cout << "\n";
#define nl cout << "\n"
#define YES cout << "YES" << "\n"
#define NO cout << "NO" << "\n"

const int N = 100005;

void solve() {
    int n;
    cin >> n;
    
    vector<ll> vec(n); readV(vec);
    int a = vec[0];
    int b = vec[n-1];
    
    ll ca=0, cb=0;
    for (int i=0; i<n; i++) if (vec[i]==a) ca++; else break;
    for (int i=n-1; i>=0; i--) if (vec[i]==a) ca++; else break;
    for (int i=0; i<n; i++) if (vec[i]==b) cb++; else break;
    for (int i=n-1; i>=0; i--) if (vec[i]==b) cb++; else break;
    
    ll ans = max(ca, cb)==2*n ? 0 : n-max(ca, cb);
    print(ans);
}

int main() {
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}