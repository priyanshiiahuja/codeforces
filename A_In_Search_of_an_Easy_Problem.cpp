#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int count = 0;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < n; i++){
        if (a[i] == 1){
            count += 1;
        }
    }
    if (count >= 1){
        cout << "HARD";
    }
    else cout << "EASY";
    return 0;
}