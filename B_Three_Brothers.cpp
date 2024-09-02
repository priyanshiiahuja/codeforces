#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n = 2;
    vector<int> num(n, 0);
    int sum = 1 + 2 + 3; 
    int s = 0;
    for (int i = 0; i < n; i++){
        cin >> num[i];
    }
    for (int i = 0; i < n; i++){
        s = num[i] + s;
    }
    cout << sum - s;
    return 0;
}