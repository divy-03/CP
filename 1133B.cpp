#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define print(a) cout << a << "\n";
#define printab(a,b) cout << a << " " << b << "\n";
#define readV(vec) for (auto &e: vec) cin >> e;
#define debug(vec) for (auto &e: vec) {cout << e << " ";} cout << "\n";
#define nl cout << "\n"
#define YES cout << "YES" << "\n"
#define NO cout << "NO" << "\n"

const int N = 100005;

void solve() {
    ll n, k;
    cin >> n >> k;

    vector<int> cnt(k);
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		cnt[x % k]++;
	}
	int ans = cnt[0] / 2;
	if (k % 2 == 0) ans += cnt[k / 2] / 2;
	for (int i = 1; i < (k + 1) / 2; i++) {
		int j = k - i;
		ans += min(cnt[i], cnt[j]);
	}
	
	print(ans*2);
}

int main() {
    int t = 1;
    while (t--) solve();
    return 0;
}
