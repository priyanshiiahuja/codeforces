#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s, s1;
    cin >> s >> s1;
    transform(s.begin(), s.end(), s.begin(), :: tolower);
    transform(s1.begin(), s1.end(), s1.begin(), :: tolower);
    int result = s.compare(s1);
    if (result < 0) cout << "-1";
    else if (result > 0) cout << "1";
    else cout << "0"; 
    // for (int i = 0; i <= s1.size(); i++){
    //     if (s[i] == s1[i]) return 0;
    //     else if (s[i] > s1[i]) return 1;
    //     else return -1;
    // }
    return 0;
}