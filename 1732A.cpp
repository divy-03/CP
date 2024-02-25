/*
    excl - grey
*/
#include <bits/stdc++.h>
using namespace std;

typedef int long long ll;
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define print(a) cout << a << "\n"
#define readV(vec) for (auto &e: vec) cin >> e;

int solve() {
    ll n;
    cin >> n;
    
    vector<ll> vec(n); readV(vec);
    
    ll g = vec[0];
    for (int i=1; i<vec.size(); i++) g = __gcd(g, vec[i]);

    ll gc = __gcd(g, n-1);
    if (g==1) {return 0;}
    if (__gcd(g, n)==1) {return 1;}
    if (gc==1) {return 2;}
    if (__gcd(gc, n)==1) {return 3;}
}

int main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) print(solve());
}
