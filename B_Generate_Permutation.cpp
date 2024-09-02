#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;

        if (n % 2 == 0) {
            cout << -1 << endl;
        } 
        
        else {

            vector<int> p(n);
            int mid = n / 2;
            int odd = 1, even = 2;

            for (int i = 0; i <= mid; i++) {
                p[i] = odd;
                odd += 2;
            }

            for (int i = mid + 1; i < n; i++) {
                p[i] = even;
                even += 2;
            }

            for (int i = 0; i < n; i++) {
                cout << p[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}



