#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for (int i=1; i<=n; i++){
        string newword;
        cin >> newword;
        if (newword.size() > 10){
            string s= to_string(newword.size()-2);
            cout << newword[0] << s << newword[newword.size() - 1]<<endl;
        }
        else cout<<newword<<endl;
    }
    return 0;
}