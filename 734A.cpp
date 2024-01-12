#include <bits/stdc++.h>
using namespace std;

#define printnl(a) cout << a << "\n"
#define printab(a, b) cout << a << " " << b << "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;
    string game;
    cin >> game;
    int countA = 0;
    int countB = 0;

    for (int i = 0; i < n; i++)
    {
        if (game[i] == 'A') countA++;
        else countB++;
    }

    if (countA == countB) cout << "Friendship";
    else if (countA > countB) cout << "Anton";
    else cout << "Danik";
}

int main()
{
    solve();
}