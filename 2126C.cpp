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
#define YES cout << "YES" << "\n"
#define NO cout << "NO" << "\n"

const int N = 100005;

void solve() {
    ll n, k, x, t=0;
    cin >> n >> k;
    
    vector<ll> vec(n); 
    for (int i = 0; i<n; i++) {
        cin >> vec[i];
        if (i == k-1) x = vec[i];
    }
    
    sort(vec.begin(), vec.end());

    for (int i = 0; i<n-1; i++) {
        if (vec[i]>=x) {
            t += vec[i+1]-vec[i];
            if (vec[i] < t) {NO; return;}
        }
    }
    YES;
} 

int main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) solve();
}
