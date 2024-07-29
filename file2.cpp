#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        long long m;
        cin >> n >> m;

        vector<long long> petals(n);
        for (int i = 0; i < n; ++i) {
            cin >> petals[i];
        }

        sort(petals.begin(), petals.end());

        long long maxp = 0;
        long long cur_sum = 0;
        int left = 0;

        for (int right = 0; right < n; ++right) {
            cur_sum += petals[right];

            // Adjust the window to maintain the valid condition
            while (petals[right] - petals[left] > 1 || cur_sum > m) {
                cur_sum -= petals[left];
                left++;
            }

            if (cur_sum <= m) {
                maxp = max(maxp, cur_sum);
            }
        }

        cout << maxp << endl;
    }

    return 0;
}
