// #include <bits/stdc++.h>
// using namespace std;

// typedef int long long ll;
// #define print(a) cout << a << "\n"
// #define printab(a, b) cout << a << " " << b << "\n"
// #define readV(vec) for (auto &e: vec) cin >> e;
// #define debug(vec) for (auto &e: vec) cout << e << " ";
// #define nl cout << "\n"
// #define YES cout << "YES\n"
// #define NO cout << "NO\n"

// void solve() {
//     ll n, H, M, h, m, ansH, ansM, aH, aM, tot;
//     cin >> n >> H >> M;
//     ll x = n-1;
//     ll sleep = H*60+M;
//     while(x--) cin >> h >> m;
//     cin >> aH >> aM;
//     ll alarm = aH*60+aM;
//     // printab((alarm-sleep)/60, (alarm-sleep)%60);
//     if (alarm < sleep) {
//         tot = 24*60 - sleep + alarm;
//     } else {
//         tot = alarm-sleep;
//     }
//     printab(tot/60, tot%60);

// }

// int main() {
//     ll t;
//     cin >> t;

//     while (t--) solve();
// }

#include <bits/stdc++.h>
using namespace std;

typedef int long long ll;
#define print(a) cout << a << "\n"
#define printab(a, b) cout << a << " " << b << "\n"
#define readV(vec)      \
    for (auto &e : vec) \
        cin >> e;
#define debug(vec)      \
    for (auto &e : vec) \
        cout << e << " ";
#define nl cout << "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"

void solve()
{
    int n, H, M;
    cin >> n >> H >> M;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int h, m;
        cin >> h >> m;
        mp[h * 60 + m]++;
    }
    int t = 0;
    while (!mp[(H * 60 + M + t) % (24 * 60)]) t++;
    cout << t / 60 << " " << t % 60 << "\n";
}

int main()
{
    ll t;
    cin >> t;

    while (t--)
        solve();
}