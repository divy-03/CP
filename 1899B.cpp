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

vector<vector<int>> calculateDivisors(int N) {
    vector<vector<int>> div(N);
    for (int i = 1; i < N; i++) for (int j = 2 * i; j < N; j += i) div[j].push_back(i);
    return div;
}


void solve() {
    ll n;
    cin >> n;
    
    vector<ll> vec(n); readV(vec);
    for (int k=0; k<n; k++) {
        if (n%k==0) {

        }
    }
}

int main() {
    int t = 1;
    cin >> t;
    while (t--) solve();
}
