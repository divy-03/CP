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

void solve() {
  ll n;
  cin >> n;
  if (n==0) {
    print(1);
    return;
  }

  if (n%4==0) {print(6);}
  else if (n%4==3) {print(2);}
  else if (n%4==2) {print(4);}
  else print(8);
}

int main() {
  solve();
}