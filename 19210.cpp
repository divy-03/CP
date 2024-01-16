#include <bits/stdc++.h>
using namespace std;

typedef int long long ll;
#define print(a) cout << a << "\n"

void solve() {
    vector<pair<long long, long long>> pair(4);
    for (auto &e: pair) cin >> e.first >> e.second;
    
    sort(pair.begin(), pair.end());
    ll a = pair[0].first - pair[3].first;
    print(a*a);    
}

int main() {
    ll t;
    cin >> t;

    while (t--) solve();
}