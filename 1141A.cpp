#include <bits/stdc++.h>
using namespace std;

typedef int long long ll;
#define print(a) cout << a << "\n"

void solve() {
    ll n, m, count = 0;
    cin >> n >> m;

    ll div = m%n==0?m/n:-1;
    while (div%3==0) {
        div /= 3;
        count++;
    }
    while (div%2==0) {
        div /= 2;
        count++;
    }
    if (div == 1) print(count);
    else print(-1);
}

int main() {
    solve();
}