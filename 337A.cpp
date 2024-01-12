#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, mn = INT_MAX;
    cin >> n >> m;
    vector <int> vec(m);
    for (auto &e : vec) cin >> e;

    sort(vec.begin(), vec.end());

    for (int i = 0; i <= m-n; i++) {
        mn = min(vec[i+n-1] - vec[i], mn);
    }
    cout << mn;

}