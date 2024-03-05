#include <bits/stdc++.h>
using namespace std;

#define printnl(a) cout << a << "\n"
#define printab(a, b) cout << a << " " << b << "\n"
#define ll long long

void solve()
{
    int n, m;
    cin >> n >> m;
    int child[n];
    int count = 0;
    int ans = INT_MIN;
    int ansIdx = 0;

    for (int i = 0; i < n; i++){
        cin >> child[i];
    }

    for (int i = 0; i < n; i++) {
        while(child[i]>0){
            child[i] -= m;
            count++;
        }
        ans = max(count, ans);
        if(ans == count) {
            ansIdx = i+1;
        }
        count = 0;
    }
    cout << ansIdx;
}

int main()
{
    int t = 1;

    while (t--)
    {
        solve();
    }
}