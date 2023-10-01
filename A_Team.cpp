#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; 
    cin >> n; 
    int c = 0;
    
    for (int i = 1; i <= n; i++){
        int count = 0;
        for (int k = 1; k <= 3; k++){
            int num;
            cin >> num;
            if (num == 1) count ++; 
        }
        if (count >= 2) c++;
        }
        cout << c;
        return 0;
    }
    
