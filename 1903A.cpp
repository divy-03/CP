#include <bits/stdc++.h>
using namespace std;

#define print(a) cout << a << "\n"
#define printab(a,b) cout << a << " " << b << "\n"
#define ll long long

void solve() {
    int n, m;
    cin >> n >> m;
    vector <int> arr(n);
    for (auto &ele : arr) cin >> ele;

    if (m == 1 && !(is_sorted(arr.begin(), arr.end()))) print("NO");
    else print("YES");
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}