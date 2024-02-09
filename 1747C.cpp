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
        ll n;
    cin >> n;
 
    vector<ll> game(n);
    for (auto &i : game) cin >> i;
 
    auto mini = min_element(game.begin(),game.end());
 
    /*
        If the first element is the minimum.
        Then Alice will have to reduce it.
        And Bob will keep choosing the minimum element.
        At one point the minimum element will decrease to 0.
        Then Bob will again put that at first place.
        Thus, he will win. 
    */
    if (*mini == game[0]) {
        print("Bob");
    }
    /*
        Another case is if the minimum element lies ahead of first element.
        In this case, Alice can keep choosing that minimum element
        and Bob will have to keep reducing it.
        Thus, Alice will win.
    */
    else {
        print("Alice");
    }
}

int main() {
    ll t;
    cin >> t;

    while (t--) solve();
}