#include <bits/stdc++.h>
using namespace std;

typedef int long long ll;
#define print(a) cout << a << "\n"

int main() {
    ll n, a, ans;
    cin >> n;

    vector <ll> nums(n);
    int arr[2] = {0};
    for (int i = 0; i < n; i++) {
        cin >> a;
        nums[i] = a%2;
        arr[nums[i]%2]++;
    };
    if (arr[0] > arr[1]) {
        for (int i = 0; i < n; i++) if (nums[i] == 1) print(i+1);
    } else {
        for (int i = 0; i < n; i++) if (nums[i] == 0) print(i+1);
    }
}
