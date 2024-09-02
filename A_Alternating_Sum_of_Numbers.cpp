#include<iostream>
#include<vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> num(n);
        for (int i = 0; i < n; i++) {
            cin >> num[i];
        }
        int odd = 0;
        int even = 0;
        for (int i = 0; i < n; i += 2) {
            odd += num[i];
        }
        for (int i = 1; i < n; i += 2){
            even += num[i];
        }
        cout << odd - even << endl;
    }

    return 0;
}