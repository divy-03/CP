#include <bits/stdc++.h>
using namespace std;

#define printnl(a) cout << a << "\n"
#define printab(a, b) cout << a << " " << b << "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;

    for (int i = 0; i <= n; i++) {
        for (int j = n; j > i ; j--) {
            cout << "  ";
        }
        for (int j = 0; j <= i; j++) {
            cout << j;
            if(i != 0) {
                cout << " ";
            }
        }
        for (int j = i-1; j >= 0; j--) {
            cout << j;
            if (j != 0) {
                cout << " ";
            }
        }
        cout << endl;
    }
    for (int i = 0; i <=n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "  ";
        }
        for (int j = 0; j < n-i; j++){
            cout << j;
            if(i != n-1) {
                cout << " ";
            }   
        }
        for (int j = n-i-2; j >= 0; j--) {
            cout << j;
            if (j != 0) {
                cout << " ";
            }
        }
        if(i != n) cout << endl;
    }
}

int main()
{
    solve();
}