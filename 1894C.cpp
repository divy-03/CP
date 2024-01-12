#include <iostream>
#include <vector>
using namespace std;

bool canReconstructArray(vector<int>& b, int n, int k) {
    for (int i = 0; i < n; i++) {
        if (b[i] != i + 1) {
            return false; // Check if there are any non-fixed points
        }
    }
    
    return k % n == 0; // Check if k is a multiple of n
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> b(n);

    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    if (canReconstructArray(b, n, k)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
