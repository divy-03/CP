#include <bits/stdc++.h>
using namespace std;

#define printnl(a) cout << a << "\n"
#define printab(a, b) cout << a << " " << b << "\n"
#define ll long long

// ACCEPTED

void solve()
{
    int n, m;
    cin >> n >> m;
    int sum = 0;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());
    
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            sum += abs(arr[i]);
            m--;
        }
        if (m == 0)
        {
            cout << sum;
            return;
        }
    }
    cout << sum;
}

int main()
{
    int t = 1;

    while (t--)
    {
        solve();
    }
}