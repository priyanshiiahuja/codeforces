#include<iostream>
using namespace std;

int main()
{
    int n, h;
    cin >> n >> h;
    int b[n];
    for (int j = 0; j < n; j++){
        cin >> b[j];
    }
    int width = n;
    for (int k = 0; k < n; k++){
        if (b[k] > h){
            width ++ ;
        }
    }
    cout << width;
    return 0;
}

 