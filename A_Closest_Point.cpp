#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n; 

        vector<int> points(n);
        for (int i = 0; i < n; ++i) {
            cin >> points[i];
        }

        if (n > 2) {
            cout << "NO" << endl;
        } 
        else if (n == 2) {
            int diff = points[1] - points[0];
            if (diff > 1) {
                cout << "YES" << endl;
            } 
            else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}