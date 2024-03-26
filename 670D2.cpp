/*
    excl - grey
*/
#include <bits/stdc++.h>
using namespace std;

typedef int long long ll;
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define print(a) cout << a << "\n"
#define readV(vec) for (auto &e: vec) cin >> e;

int main() {
    fastio;
    ll n, totalMagicPowder;
    cin >> n >> totalMagicPowder;
    
    vector<ll> need(n), tot(n); readV(need); readV(tot);
    map<ll, ll> rem, ogAmountNeeded;
    set<ll> maxCookiesPossible;
    
    for (int i=0; i<n; i++) {
        ll a = tot[i]/need[i];
        rem[a] += need[i] - tot[i]%need[i];
        ogAmountNeeded[a] += need[i];
        maxCookiesPossible.insert(a);
    }
    auto it = maxCookiesPossible.begin();
    auto nxt = it; nxt++;
    ll magicPowderUsed = 0, magicPowderNeeded = ogAmountNeeded[*it], cookiesMade = *it;
    while (nxt != maxCookiesPossible.end()) {
        ll diff = (*nxt - *it - 1)*magicPowderNeeded;
        magicPowderUsed = magicPowderUsed + rem[*it] + magicPowderNeeded - ogAmountNeeded[*it];

        if (magicPowderUsed > totalMagicPowder) {
            magicPowderUsed = magicPowderUsed - rem[*it] - magicPowderNeeded + ogAmountNeeded[*it]; 
            break;
        }

        cookiesMade++; 
        magicPowderUsed += diff;
        
        if (magicPowderUsed > totalMagicPowder) {
            magicPowderUsed = magicPowderUsed - diff; 
            break;
        }
        
        cookiesMade = *nxt; 
        magicPowderNeeded += ogAmountNeeded[*nxt];

        it++; nxt++;
    }
    
    if (magicPowderUsed < totalMagicPowder) {
        totalMagicPowder = totalMagicPowder - magicPowderUsed; 
        cookiesMade += totalMagicPowder/magicPowderNeeded;
    }

    print(cookiesMade);
}

