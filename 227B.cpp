#include <bits/stdc++.h>
using namespace std;


#define printnl(a) cout << a << "\n"
#define printab(a,b) cout << a << " " << b << "\n"
#define ll long long

int main() {
    int n, m, a, b;
    long long sumV = 0;
    long long sumP = 0;
    cin >> n;
    int arr[n + 1] = {0};
 
    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        arr[a] = i;
    }
 
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> b;
        sumV = arr[b] + sumV;
        sumP = n - arr[b] + 1 + sumP;
    }
 
    cout << sumV << " " << sumP;

}   