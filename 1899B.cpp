#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

#define printnl(a) cout << a << "\n"
#define printab(a, b) cout << a << " " << b << "\n"
#define ll long long

void solve()
{
    int n, a;
    cin >> n;
    int arr[n];
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // sort(arr, arr + n);

    for (int i = n; i >= 1; i--)
    {
        if (n % i == 0)
        {
            // cout << i << " ";
            a = n / i;
            int sum = 0;
            // cout << a << " ";
            for (int j = 0; j < a; j++)
            {
                sum = abs(sum - arr[j] + arr[n - j - 1]);
            }
            ans = max(ans, sum);
        }
    }

    cout << ans;
    cout << endl;
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