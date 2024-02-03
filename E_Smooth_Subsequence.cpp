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
    
    vector<ll> vec(n); readV(vec);

    ll cnt=0, j=1;
    for (int i=0; i<n-1; i++) {
        printab(vec[i], vec[j]);
        if (abs(vec[i]-vec[j]) <= k) {
            cnt++;
        } else if (i!=n-2){j++;i--;}
    }
    // print(cnt);
}

int main() {
    int t = 1;
    while (t--) solve();
}
