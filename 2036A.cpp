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
#define YES {cout << "YES" << "\n"; return;}
#define NO {cout << "NO" << "\n"; return;}

const int N = 100005;

string solve() {
    ll n;
    cin >> n;
    
    vector<ll> vec(n); readV(vec);
    for (int i = 0; i<n-1; i++) {
        int a = abs(vec[i] - vec[i+1]);
        if ( a != 5 && a != 7) return "NO";
    }
    return "YES";
}

int main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) print(solve());
}
