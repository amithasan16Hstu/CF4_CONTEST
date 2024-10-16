#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        long long k;
        cin >> n >> k;
        
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        
        sort(a.begin(), a.end(), greater<long long>());
        
        
        long long alice_sum = 0, bob_sum = 0;
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                alice_sum += a[i];
            } else {
                bob_sum += a[i];
            }
        }
        
        long long min_score = alice_sum - bob_sum;
        
        
        long long current_k = 0;
        for (int i = 1; i < n; i += 2) {
            if (k > 0 && i < n) {
                long long increase = min(k, a[i-1] - a[i]);
                k -= increase;
                bob_sum += increase;
                min_score = min(min_score, alice_sum - bob_sum);
            }
        }
        
        cout << min_score << endl;
    }
    
    return 0;
}
