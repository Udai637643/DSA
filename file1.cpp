#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int e, c;
        cin >> e >> c;
        int cnt = 0, i = e;
        if(c > 0){
            c -= i;
            cnt++;
            i--;
        }
        while(c > 0){
            for(int j = 0; j < 2; j++){
                if(c <= 0) break;
                c -= i;
                cnt += 1;
            }
            i--;
        }
        cout << cnt << endl;
    }
return 0;
}