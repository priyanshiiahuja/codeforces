#include<iostream>
using namespace std;

int main()
{
    string s;
    cin >> s; 
    int lower = 0, upper = 0;
    for (int i = 0; i <= s.size(); i++){
        if (s[i] > 65 && s[i] < 90){
            lower++ ;
        }
        else if (s[i] > 97 && s[i] < 122){
            upper++ ;
        }

        if (lower > upper){
            if (s[i] > 65 && s[i] < 90){
                s[i] = s[i] + 32;
            } 
        } 

        else if (upper > lower){
            if (s[i] > 97 && s[i] < 122){
                s[i] = s[i] - 32;
            }
        }

        else {
            if (s[i] > 65 && s[i] < 90){
                s[i] = s[i] + 32;
            } 
        }
    }
    // cout << lower << endl << upper << endl;
    cout << s;
    return 0;
}