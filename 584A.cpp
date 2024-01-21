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

int solve() {
    ll n, k;
    cin >> n >> k;
    n--;
    string a;
    if (k==10) {
        if (n==0) cout << -1;
        else {
            a = "1";
            while(n--) a.append("0");
            cout << a;
        }
    }
    else {
        a = to_string(k);
        while (n--) a.append(to_string(k));
        cout << a;
    }
}

int main() {
    solve();
}