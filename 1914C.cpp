/*
    excl - grey
*/
#include <bits/stdc++.h>
using namespace std;

typedef int long long ll;
#define print(a) cout << a << "\n";
#define readV(vec) for (auto &e: vec) cin >> e;

void solve() {
    ll n, k;
    cin >> n >> k;
    vector <ll> a(n); readV(a);
    vector <ll> b(n); readV(b);

    ll mx=0, sum=0, res=0;
    ll l = n<k ? n: k;
    for (int i=0; i<l; i++) {
        sum += a[i];
        mx = *max_element(b.begin(), b.begin()+i+1); // {Wrong} O(n) dont use it inside loop use below method to avoid O(n2)  
        mx = max(mx, b[i]); // {Correct}
        res = max(res, sum + mx*(k-1-i));
    }
    print(res);
}

int main() {
    ll t = 1; cin >> t;
    while (t--) solve();
}
