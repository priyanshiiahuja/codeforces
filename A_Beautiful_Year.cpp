#include<iostream>
using namespace std;

int main()
{
    int n; 
    cin >> n; 
    string s = to_string(n);
    for (int i = 0 ; i < s.size() ; i++){
        for (int j = i+1 ; j < s.size() ; j++){
            if (s[i] == s[j]){
                break ;
            }
            else{ 
                n++ ;
                if (s[i] == s[j]){
                    break;
                } 
            }
        }
    } 
    cout << n;
    return 0;
}