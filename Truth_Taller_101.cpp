#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;  
    while (T--) {
        int N, M;
        cin >> N >> M;  
        if (N == 0 || N<M) {
            cout << "-1" << endl;
        } 
       
        else if (M == 0) {
            cout << "1" << endl;
        } 
       
        else {
            cout << N + M << endl;
        }
    }
    return 0;
}
