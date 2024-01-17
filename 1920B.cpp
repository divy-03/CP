#include <bits/stdc++.h>
using namespace std;

typedef int long long ll;
#define print(a) cout << a << "\n"
#define printab(a, b) cout << a << " " << b << "\n"
#define readV(vec) for (auto &e: vec) cin >> e;
#define debug(vec) for (auto &e: vec) cout << e << " ";
#define nl cout << "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"

void solve() {
    int n, k, x;
    cin >> n >> k >> x;
    
    int A[n + 1] = {};
    for (int i = 1; i <= n; i++)
        cin >> A[i];
    
    sort(A + 1, A + n + 1, greater<int>());
    
    // Prefix sum
    for (int i = 1; i <= n; i++)
        A[i] += A[i - 1];

    int ans = -1e9;
    for (int i = 0; i <= k; i++) {
        ans = max(ans, A[n] - 2 * A[min(i + x, n)] + A[i]);
        // cout << ans << " ";
    }
    
    print(ans);
}

 int main() {
    ll t;
    cin >> t;

    while (t--) solve();
}