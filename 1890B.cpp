#include <bits/stdc++.h>
using namespace std;

#define printnl(a) cout << a << "\n"
#define printab(a, b) cout << a << " " << b << "\n"
#define ll long long

void solve()
{
    int n, m;
    cin >> n >> m;
    string a, b;
    cin >> a >> b;

    for (int i = 0; i < m - 1; i++)
    {
        if (b[i] == b[i + 1])
        {
            cout << "NO";
            return;
        }
    }

    for (int i = 0; i < n-1; i++) {
        if (a[i] == a[i+1]) {
            if (a[i] == '1' && b[0] == b[m-1] && b[0] == '0'){
                cout << "YES";
                return;
            } else if (b[0] == b[m-1] && b[0] == '1') {
                cout << "YES";
                return;
            } else {
                cout << "NO";
                return;
            }
        }

        cout << endl;
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