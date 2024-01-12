#include <bits/stdc++.h>
using namespace std;

#define printnl(a) cout << a << "\n"
#define printab(a, b) cout << a << " " << b << "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;
    int sum = 0;

    vector<int> arr(2 * n);

    for (int i = 0; i < 2 * n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    for (int i = 0; i < n - 1; i++)
    {
        sum += abs(arr[i] - arr[i + 1]);
    }

    for (int i = n; i < 2*n - 1; i++) {
        sum += abs(arr[i] - arr[i + 1]);
    }

    cout << sum << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " " << arr[2 * n - i - 1] << endl;
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
}