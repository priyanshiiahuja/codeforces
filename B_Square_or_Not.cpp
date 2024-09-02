#include <iostream>
#include <cmath>
using namespace std;

bool matrix(const string &s, int k) {
    for (int i = 0; i < k; ++i) {
        if (s[i] != '1' || s[(k - 1) * k + i] != '1') {
            return false;
        }
    }

    for (int i = 1; i < k - 1; ++i) {
        if (s[i * k] != '1' || s[i * k + k - 1] != '1') {
            return false;
        }
        for (int j = 1; j < k - 1; ++j) {
            if (s[i * k + j] != '0') {
                return false;
            }
        }
    }
    
    return true;
}

int main() {

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        string s;
        cin >> s;

        long long root = sqrt(n);

        if (root * root != n){
            cout << "No" << endl;
            continue;
        }

        int k = sqrt(n);
        if (matrix(s, k)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}
