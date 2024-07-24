#include <bits/stdc++.h>
using namespace std;

typedef int long long ll;
#define print(a) cout << a << "\n"
#define readV(vec) for (auto &e : vec) cin >> e;

int main()
{
    ll n;
    cin >> n;

    vector<ll> choco(n);
    readV(choco);
    reverse(choco.begin(), choco.end());

    for (ll i = 0; i < n - 1; i++) if (choco[i] <= choco[i + 1]) choco[i + 1] = choco[i]!=0 ? choco[i] - 1 : 0;
    ll sum = accumulate(choco.begin(), choco.end(), 0LL);
    print(sum);
}