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
    ll n, e;
    cin >> n;
    ll arr[5] = {0}; 
    while (n--) {
        cin >> e;
        arr[e]++;
    }

    ll taxi = 0;
    taxi += arr[4];

    taxi += arr[3];
    arr[1] -= min(arr[1], arr[3]);
    taxi += arr[2]/2;

    if (arr[2]&1) {
        arr[1] = max(arr[1]-2, 0LL); 
        taxi++;
    }
    //if (arr[2]%2 == 1 && arr[1] >= 2){
     //   arr[1] -= 2;
     //   taxi++;
   // }
    
    taxi += arr[1]/4 + (arr[1]%4 != 0);
    print(taxi);
}

int main() {
    solve();
}