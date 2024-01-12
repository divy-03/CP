#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define printnl(a) cout << a << "\n"
#define printab(a, b) cout << a << " " << b << "\n"
#define readV(vec) for (auto &e: vec) cin >> e;


void solve() {
    ll n, count = 0; double x;
    cin >> n;

    for (int a = 1; a <= n; a++) {
        for (int b = a+1; b <= n; b++) {
            x = a*a + b*b;
            x = sqrt(x);
			if (floor(x) == x && x <= n)
				count++;
        }
    }
    cout << count;
}

int main() {
    solve();
    return 0;
}
