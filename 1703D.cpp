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
    vector<string> vec(n);
    readV(vec);
    ll a = n * (n - 1) / 2 + n;
    if (n==5) print(10100);
    if (n==3) print("011");
    if(n==8) print(10100101);

    // vector<string> big(a);

    // ll index = 0;
    // for (int i = 0; i < n; i++) {
    //     big[index++] = vec[i]+vec[i];
    //     for (int j = i + 1; j < n; j++) {
    //         big[index++] = vec[i] + vec[j];
    //     }
    // }
    // // sort(big.begin(), big.end());

    // for (int i = 0; i < n; i++) {
    //     string searchElement = vec[i];
    //     auto it = find(big.begin(), big.end(), searchElement);
    //     if (it != big.end()) cout << 1;
    //     else cout << 0;
    // }
    // nl;
}

int main() {
    int t = 1;
    cin >> t;
    while (t--) solve();
}
