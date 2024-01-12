#include <bits/stdc++.h>
using namespace std;
#include <algorithm>

#define printnl(a) cout << a << "\n"
#define printab(a, b) cout << a << " " << b << "\n"
#define ll long long

void solve()
{
    int n;
    int sum = 0;
    int count = 0;
    cin >> n;

    vector<int> month(12);
    for (int i = 0; i < 12; i++)
    {
        cin >> month[i];
    }

    sort(month.begin(), month.end(), greater<int>());

    for (int i = 0; i < 12; i++)
    {
        if (sum < n) {
            sum += month[i];
            count++;
        } else {
            break;
        }
    }

    if (sum >= n) cout << count;
    else cout << -1;

}

int main()
{
    int t = 1;

    while (t--)
    {
        solve();
    }
}