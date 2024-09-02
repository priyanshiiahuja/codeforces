#include<iostream>
using namespace std;

int main()
{
    string s, s1;
    cin >> s >> s1;
    int x = s.size() - 1 , count = 0;
    for (int i = 0; i < s.size(); i++){
        if (s[i] == s1[x-i]) count++;
    }
    if (count == s.size()) cout << "YES";
    else cout << "NO" ;
    return 0;
}