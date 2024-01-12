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

int solve() {
    ll n, sum = 0;
    cin >> n;

    if (n==2){
        return 3;
    }

    sum += 2*(n-1) + n;
    for (int i = 2; i <= n-2; i++) {
        sum += i*(n-i);
    }
    return sum;
}

int main() {
    cout << solve();
}