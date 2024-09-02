#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        sort(a.rbegin(), a.rend());

        int alice = 0;
        int bob = 0;
        for (int i = 0; i < n; i++){
            if (i % 2 == 0){
                alice += a[i];
            }
        }
        for (int i = 0; i < n; i++){
            if (i % 2 == 1){
                if(k >= (a[i-1] - a[i])){
                    k -= (a[i-1] - a[i]);
                    a[i] = a[i-1];
                    bob += a[i];
                }
                else{
                    a[i] += k;
                    k = 0;
                    bob += a[i];
                }
            }        
    }
    int score = alice - bob;
    cout << score << endl;
    }
    return 0;

}