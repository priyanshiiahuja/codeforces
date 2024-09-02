#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, x = 0;
    cin >> n;
    for (int i = 1; i <= n; i++){
        string s; 
        cin >> s;
        for (int j = 0; j <= s.size(); j++){
            if (s[j] == '+' and s[j+1] == '+') {
                x++;
            }      
            else if (s[j] == '-' and s[j+1] == '-'){
                x--;
            }
    }
    }
    cout << x;
    return 0;
}