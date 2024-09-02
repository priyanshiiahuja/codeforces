#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s, s1;
    cin >> s >> s1;
    for (int i = 0; i < s1.size(); i++){
        if (s1[i] >= 65 && s1[i] <= 90){
            s1[i] = s1[i] + 32;
        }
        if (s[i] >= 65 && s[i] <= 90){
            s[i] = s[i] + 32;
        }
    }
    if (s == s1) cout << "0";
    else if (s > s1) cout << "1";
    else cout << "-1" ;
    return 0;
}