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
    ll n, count = 0;
    cin >> n;

    vector <ll> arr(n);
    readV(arr);
    sort(arr.begin(), arr.end());
    for (int i = 1; i < n-1; i++) if (arr[i] > arr[0] && arr[i] < arr[n-1]) count++;
    print(count);
}

int main() {
    solve();
}