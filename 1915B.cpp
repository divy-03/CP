#include <bits/stdc++.h>
using namespace std;

typedef int long long ll;

void solve()
{
    for (int i = 0; i < 3; i++)
    {
        string str; 
        cin >> str;
        ll sum = 0;
        for (auto &ch : str)
        {
            int a = ch;
            sum += a;
        }
        if (sum != 198) {
            sum = sum - '?';
            char a = 198-sum;
            cout << a;
        }
    }
    cout << endl;
}

int main()
{
    ll t;
    cin >> t;

    while (t--) solve();
}