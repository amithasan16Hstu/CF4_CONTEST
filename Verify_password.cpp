#include <iostream>
#include <string>
using namespace std;

// Function to check if the password is strong
bool isStrongPassword(const string& password) {
    int n = password.length();
    
    bool foundDigit = false;
    char lastDigit = '0';
    char lastLetter = 'a';

    for (int i = 0; i < n; i++) {
        char ch = password[i];

        if (isdigit(ch)) {
            if (foundDigit) {
                if (ch < lastDigit) return false; // Check if digits are in non-decreasing order
            }
            lastDigit = ch;
            foundDigit = true;
        } else if (isalpha(ch)) {
            if (foundDigit) return false; // No digit should come after a letter
            if (ch < lastLetter) return false; // Check if letters are in non-decreasing order
            lastLetter = ch;
        }
    }

    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string password;
        cin >> password;

        if (isStrongPassword(password)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
