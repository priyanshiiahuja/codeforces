#include<iostream>
using namespace std;

int main()
{
    int a, b, count = 0;
    cin >> a >> b;
    while (b >= a) {
        a = a * 3;
        b = b * 2;
        count ++;
    }
    cout << count ;
    return 0;
}