#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        long long int total = 0;
        long long int totals = 0;
        
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
            if (arr[i] < x) {
                total += (x - arr[i]);
            } else {
                totals += (arr[i] - x);
            }
        }
        
        if (totals >= total) {
            cout << n << endl;
        } else {
           long long int sff = 0;
           long long int rs = totals;
            vector<int> de;
            
            for (int i = 0; i < n; ++i) {
                if (arr[i] < x) {
                    de.push_back(x - arr[i]);
                } else {
                    ++sff;
                }
            }
            
            // Sort de in ascending order
            sort(de.begin(), de.end());
            
            for (int i = 0; i < de.size(); ++i) {
                if (rs >= de[i]) {
                    rs -= de[i];
                    ++sff;
                } else {
                    break;
                }
            }
            
            cout << sff << endl;
        }
    }
    
    return 0;
}
