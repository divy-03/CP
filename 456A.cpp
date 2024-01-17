#include <bits/stdc++.h>
using namespace std;

typedef int long long ll;
#define print(a) cout << a << "\n"
#define printab(a, b) cout << a << " " << b << "\n"
#define readV(vec) for (auto &e: vec) cin >> e;
#define debug(vec) for (auto &e: vec) cout << e << " ";
#define nl cout << "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"

void solve() {
    ll n;
    cin >> n;

    vector <pair <ll, ll>> laptops(n);
    for (auto &e: laptops) cin >> e.first >> e.second;
    
    sort(laptops.begin(),laptops.end());
 
    bool isHappy = false;
     for(int i = 1; i < n; i++) {
          if(laptops[i].second < laptops[i - 1].second){
            isHappy = true;
          }
     }
     if(isHappy) cout << "Happy Alex";
     else cout << "Poor Alex";
}

int main() {
    solve();
}