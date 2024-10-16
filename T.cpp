#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N;
    cin >> N;
    
    if (N <= 999) {
        
        cout << N << endl;
    } else if (N <= 9999) {
        
        cout << (N / 10) * 10 << endl;
    } else if (N <= 99999) {
       
        cout << (N / 100) * 100 << endl;
    } else if (N <= 999999) {
       
        cout << (N / 1000) * 1000 << endl;
    } else if (N <= 9999999) {
       
        cout << (N / 10000) * 10000 << endl;
    } else if (N <= 99999999) {
       
        cout << (N / 100000) * 100000 << endl;
    } else if (N <= 999999999) {
       
        cout << (N / 1000000) * 1000000 << endl;
    } else {
        
        cout << (N / 10000000) * 10000000 << endl;
    }

    return 0;
}
