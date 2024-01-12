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
//     pair <ll, ll> pos;
//     pair <ll, ll> king;
//     pair <ll, ll> queen;
//     cin >> pos.first >> pos.second;
//     cin >> king.first >> king.second;
//     cin >> queen.first >> queen.second;
    
//     ll a = abs(king.first - queen.first);
//     ll b = abs(king.second - queen.second);
//     // printab(a, b);

//     if (a == 0) {
//         if (pos.first == b/2 || pos.second == b/2) {
//             print(2);
//             return;
//         }
//     }
//     if (b == 0) {
//         if (pos.first == a/2 || pos.second == a/2) {
//             print(2);
//             return;
//         }
//     }
//     if (a == b) {
//         if (a%2 == 0 && (pos.first < a || pos.second < a)) {
//             print(1);
//             return;
//         }
//         else if (a%2 == 1 && (pos.first < a || pos.second < a)) {
//             print(2);
//             return;
//         }
//     }
//     if ((a/2 == pos.first && b/2 == pos.second) || (a/2 == pos.second && b/2 == pos.first)) {
//         print(1);
//         return;
//     }
//     else {
//         print(0);
//         return;
//     }

// }

// int main() {
//     ll t;
//     cin >> t;

//     while (t--) solve();
// }

#include <bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin >> t;
  for (int i = 0; i < t; i++){
    int a, b;
    cin >> a >> b;
    int xK, yK;
    cin >> xK >> yK;
    int xQ, yQ;
    cin >> xQ >> yQ;
    vector<int> dx = {a, a, -a, -a, b, b, -b, -b};
    vector<int> dy = {b, -b, b, -b, a, -a, a, -a};
    int ans = 0;
    for (int j = 0; j < 8; j++){
      for (int k = 0; k < 8; k++){
        if (xK + dx[j] == xQ + dx[k] && yK + dy[j] == yQ + dy[k]){
            ans++;
        }
      }
    }
    if (a == b){
      ans /= 4;
    }
    cout << ans << endl;
  }
}