#include <bits/stdc++.h>
using namespace std;

typedef int long long ll;
#define printnl(a) cout << a << "\n"
#define printab(a, b) cout << a << " " << b << "\n"
#define readV(vec) for (auto &e: vec) cin >> e;

void solve()
{
    int n, m, countE = 0, countO = 0, total = 0, totO = 0, totE = 0;
    cin >> n >> m;
    vector <ll> arr(n);
    readV(arr);

    for (auto &e : arr) {
        if (e%2 == 0) countE++;
        else countO++;
    }
    if (countO == 0) {
        cout << "NO\n";
        return;
    }

    for (int i = 1; i <= countO; i++) {
        if(i%2!=0 && i <= m) totO = i;
    }
    total = totO;

    while (countE && total != m) {
        totE++;
        countE--;
        total++;
    }

    while (total != m && countO) {
        totO++;
        countO--;
        total++;
    }

    if (totO%2 == 0) cout << "NO\n";
    else cout << "YES\n";
}

int main()
{
    int t;
    cin >> t;

    while (t--) solve();
}