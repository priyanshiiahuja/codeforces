#include<iostream>
using namespace std;

int main()
{
    string n;
    cin >> n;
    int count = 0;
    for (int i = 0; i < n.size(); i++){
        if (n[i] == '7' || n[i] == '4'){x
            count++;
            // cout << s[i] << endl;
            // cout << count << endl;
            // cout << endl;
        }
    }
    // cout << "Count = " << count << endl;
    if (count == 7 || count == 4){
            cout << "YES";
    }
    else {
            cout << "NO";
    }
    return 0;
}