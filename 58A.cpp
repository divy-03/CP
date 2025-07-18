/*
    excl - grey
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll; // Fixed typedef
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define print(a) cout << a << "\n"
#define YES cout << "YES" << "\n"
#define NO cout << "NO" << "\n"

void solve() {
    string s, hello = "hello";
    cin >> s;

    int pos = 0; // Pointer to track position in "hello"
    for (char ch : s) {
        if (ch == hello[pos]) pos++;
        if (pos == hello.size()) break; // Stop if "hello" is fully matched
    }

    if (pos == hello.size()) YES;
    else NO;
}

int main() {
    fastio;
    int t = 1;
    while (t--) solve();
}
