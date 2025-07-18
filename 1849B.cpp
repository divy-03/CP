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

void solve() {
    ll n, k;
    cin >> n >> k;
    vector<pair<ll, ll>> pr(n);
    vector<int> ans;
    for (int i=0; i<n; i++) {
        cin >> pr[i].first;
        pr[i].second = 1+i;
    }
    int j = 0;
    while (j<n) {
        sort(pr.begin(), pr.end());
        // for (auto &p: pr) cout << p.second << " "; nl;
        if (pr[j].first <= 0) {
            ans.push_back(pr[j].second);
            pr[j].first = -INT_MAX;
            j++;
        }
        pr[n-1].first -= k;
    }
    debug(ans);
}

int main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) solve();
}
