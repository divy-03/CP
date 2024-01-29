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

vector<int> findDivisors(int number, int a) {
    std::vector<int> divisors;

    for (int i = 1; i <= number; ++i) {
        if (number % i == 0 && i <= a) {
            divisors.push_back(i);
        }
    }

    return divisors;
}

void solve() {
    ll x, n;
    cin >> x >> n;
    ll k = x/n +1;
    
    vector<int> div = findDivisors(x, k);
    // debug(div);    
}

int main() {
    int t = 1;
    cin >> t;
    while (t--) solve();
}
