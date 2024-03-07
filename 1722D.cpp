/*
    excl - grey
*/
#include <bits/stdc++.h>
using namespace std;

typedef int long long ll;
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define print(a) cout << a << "\n"
#define printab(a,b) cout << a << " " << b << "\n"
#define readV(vec) for (auto &e: vec) cin >> e;
#define debug(vec) for (auto &e: vec) {cout << e << " ";} cout << "\n";
#define nl cout << "\n"

void solve() {
    ll n;
    cin >> n;
    
    string str; cin >> str;

    vector <ll> vec(n);
    for (ll i=0; i<n; i++) {
        if (str[i] == 'L') vec[i] = i;
        else vec[i] = n-i-1;
    }
    ll sum = accumulate(vec.begin(), vec.end(), 0LL);
    for (ll i=0; i<n; i++) {
        if (i<=(n-1)/2) vec[i] = (n-i-1) - vec[i];
        else vec[i] = i - vec[i];
    }
    sort(vec.rbegin(), vec.rend());
    for (ll i=0; i<n; i++) {
        sum += max(0LL, vec[i]);
        cout << sum << " ";
    } nl;
}

int main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) solve();
}
