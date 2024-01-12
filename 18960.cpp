#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n;
    cin >> n;
    vector<int> arr(n);

    for (auto &ele : arr) cin >> ele;

    if (arr[0] != 1) {
        cout << "NO\n";
        return;
    }
    else cout << "YES\n";
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }
}