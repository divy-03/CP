/*
    excl - grey
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define readV(vec) for (auto &e: vec) cin >> e;
#define debug(vec) for (auto &e: vec) {cout << e << "\n";} cout << "\n";
#define YES cout << "YES" << "\n"
#define NO cout << "NO" << "\n"

void solve() {
    ll n;
    cin >> n;
    
    vector<string> vec(n + 2); // Increase vector size
    vec[0] = vec[n + 1] = string(n + 2, '.'); // Padding with '.' to handle boundary cases
    for (int i = 1; i <= n; i++) {
        cin >> vec[i];
        vec[i] = '.' + vec[i] + '.'; // Padding with '.' to handle boundary cases
    }
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            ll cnt = 0;
            if (vec[i][j + 1] == 'o') cnt++;
            if (vec[i][j - 1] == 'o') cnt++;
            if (vec[i - 1][j] == 'o') cnt++;
            if (vec[i + 1][j] == 'o') cnt++;
            if (cnt % 2 != 0) {
                NO;
                return;
            }
        }
    }
    YES;
}

int main() {
    fastio;
    int t = 1;
    while (t--) solve();
    return 0;
}
