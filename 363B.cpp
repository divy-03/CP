/*
    excl - grey
*/
#include <bits/stdc++.h>
using namespace std;

typedef int long long ll;
#define print(a) cout << a << "\n";
#define readV(vec) for (auto &e: vec) cin >> e;

const int N = 100005;

void solve() {
    ll n, k;
    cin >> n >> k;

    vector<ll> vec(n); readV(vec);

    ll sum=0, mn=LONG_LONG_MAX, idx=0;
    for (int j=0; j<k; j++) sum+=vec[j];
    for (int i=0; i<=n-k; i++) {
        if (sum<mn) {
            mn=sum;
            idx=i;
        }
        sum = sum - vec[i] + vec[i+k];
    }
    print(idx+1);
}

int main() {
    int t = 1;
    while (t--) solve();
}
