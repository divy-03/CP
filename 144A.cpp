#include <bits/stdc++.h>
using namespace std;

#define printnl(a) cout << a << "\n"
#define printab(a,b) cout << a << " " << b << "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int mx = 0;
    int mn = INT_MAX;
    int mxIdx, mnIdx;

    for(int i = 0; i < n; i++) {
        if (mx < arr[i]) mxIdx = i+1;
        mx = max(arr[i], mx);
        mn = min(arr[i], mn);
        if (mn == arr[i]) mnIdx = i+1;
    }
    
    // printab(mxIdx, mnIdx);
    // printab(mx, mn);
    if(mxIdx > mnIdx) cout << n - mnIdx + mxIdx - 2;
    else cout << n - mnIdx + mxIdx - 1;


    

}

int main()
{
    solve();
}