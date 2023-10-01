#include<iostream>
using namespace std;

int main()
{
    int n, k, count = 0;
    cin >> n >> k;
    int a[n];
    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }
    for (int j = 1; j <= n; j++){
        if ((a[j] >= a[k]) && (a[j] > 0)) count ++;
    }
    cout << count << endl; 
    return 0;
}