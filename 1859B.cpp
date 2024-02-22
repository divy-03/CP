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
    
    vector <vector<ll>> vec(n);
    for (int i=0; i<n; i++) {
        int m; cin >> m;
        for (int j=0; j<m; j++) {
            int a; cin >> a;
            vec[i].push_back(a);
        }
    }
    for (int i = 0; i < n; i++) {
        sort(vec[i].begin(), vec[i].end());
    }
    ll mn1 = INT_MAX, mn2 = INT_MAX, arr;
    for (int i = 0; i < n; i++) {
        mn2 = min(mn2, vec[i][1]);
        mn1 = min(mn1, vec[i][0]);
        arr = mn2==vec[i][1] ? i : arr;
    }
    ll sum = mn1;
    for (int i = 0; i<n; i++) {
        if (i == arr) continue;
        sum += vec[i][1];
    }
    print(sum);
}

int main() {
    int t = 1;
    cin >> t;
    while (t--) solve();
}
