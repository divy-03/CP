#include <bits/stdc++.h>
using namespace std;

int minMoves(const vector<string>& instr) {
    unordered_map<string, int> d = {{"up", 0}, {"down", 1}, {"left", 2}, {"right", 3}};
    vector<vector<vector<int>>> dp(4, vector<vector<int>>(4, vector<int>(instr.size() + 1, 1e9)));

    dp[d["down"]][d["right"]][0] = 0;

    for (int s = 1; s <= instr.size(); ++s) {
        int m = d[instr[s - 1]];
        
        for (int l1 = 0; l1 < 4; ++l1) {
            for (int l2 = 0; l2 < 4; ++l2) {
                if (l1 == l2) continue;

                dp[m][l2][s] = min(dp[m][l2][s], dp[l1][l2][s - 1] + (l1 != m ? 1 : 0));
                dp[l1][m][s] = min(dp[l1][m][s], dp[l1][l2][s - 1] + (l2 != m ? 1 : 0));
            }
        }
    }

    int res = 1e9;
    for (int l1 = 0; l1 < 4; ++l1) {
        for (int l2 = 0; l2 < 4; ++l2) {
            if (l1 != l2) {
                res = min(res, dp[l1][l2][instr.size()]);
            }
        }
    }
    
    return res;
}

int main() {
    int N;
    cin >> N;
    vector<string> instructions(N);
    for (int i = 0; i < N; ++i) {
        cin >> instructions[i];
    }
    cout << minMoves(instructions) << endl;
    return 0;
}
