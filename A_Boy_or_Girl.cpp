#include<iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int x = s.size() ;
    for (int i = 0; i < x; i++){
        for (int j = i+1; j < x; j++){
            if (s[i] == s[j]){
                x--;
            }
        } 
    }
    if (x % 2 == 0) cout << "CHAT WITH HER!" ;
    else cout << "IGNORE HIM!";
    return 0;
}