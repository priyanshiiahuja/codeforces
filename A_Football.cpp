#include<iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    char a , b = '1' ;
    int count = 0;
    for (int i = 0; i < s.size(); i++){
        if (s[i] == s[i+1]){
            a = s[i];
            count++;
        }
        else if (s[i] == a){
            if (s[i] == s[i+1]){
            count++;
        }

        }
    }
    
    cout << count ;
    if (count == 7){
        cout << "YES";
    }
    else cout << "NO";
    return 0;
}