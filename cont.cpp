#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

#define printnl(a) cout << a << "\n"
#define printab(a, b) cout << a << " " << b << "\n"
#define ll long long

void solve()
{
    ll n, a, b;
    cin >> n;
    ll arr[n];
    ll ans = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // sort(arr, arr + n);

    // for (int i = 0; i < n; i++) {
    //     cout << arr[i] << " ";
    // }    

    for (int i = n; i > 1; i--)
    {
        if (n % i == 0)
        {
            cout << i << " ";
            a = n / i;
            b = a;
            cout << a << " ";
            ll brr[a];
            for (int j = 0; j < a; j++)
            {
                while (b--)
                {
                    for (int k = 0; k < n; k++)
                    {
                        brr[j] += arr[k + b];
                    }
                }
                cout << brr[j] << " ";
                cout << endl;
            }
            cout << endl;
        }
    }

    // cout << ans;
    // cout << endl;
}
int main()
{
    solve();
}