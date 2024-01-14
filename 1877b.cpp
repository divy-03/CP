#include <bits/stdc++.h>
using namespace std;

typedef int long long ll;
#define print(a) cout << a << "\n"

void solve() {
    ll n, m;
    cin >> n >> m;

    vector <pair <ll, ll>> pair(n);
    for (auto &e: pair) cin >> e.second;
    for (auto &e: pair) cin >> e.first;
    sort(pair.begin(), pair.end());
    ll sum = m;
    ll cnt = 1;
    for (auto &e: pair) {
        if (e.first < m) {
            if (e.second > n - cnt) {
                sum += e.first*(n-cnt);
                cnt = n;
                break;
            } else {
                sum += e.first*e.second;
                cnt += e.second;
            }
        } else {
            sum += m*(n-cnt);
            break;
        }
    }
    print(sum);
}

int main() {
    ll t;
    cin >> t;

    while (t--) solve();
}