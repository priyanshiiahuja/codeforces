#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        
        int n;
        cin >> n;
        vector<int> num;
        num.resize(n);

        for (int i = 0; i < n; i++){
            cin >> num[i];
        }
        
        int sum = 0;
        int sq_sum = 0;

        for (int i = 0; i < n; i++){
            sum += num[i];
            sq_sum += num[i] * num[i];
        }
        int sq = sum*sum ;
        int terms = (n*(n-1))/2;
        int ans = ((sq - sq_sum)/2)/terms;
        cout << ans << endl;
    }
    return 0;
}