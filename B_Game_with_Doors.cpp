#include<iostream>
#include <vector>
#include <algorithm>


using namespace std; 

int main(){
    int t;
    cin >> t;
    while(t--){
        int l, r, L, R;
        cin >> l >> r >> L >> R;

        if ((L > r) || (l > R)){
            cout << 1 << endl;
        }
        else{
            int l1=min(l,L);
            int l2=max(l,L);
            int r1=min(r,R);
            int r2=max(r,R);
            int ans=r1-l2;
            if (l1<l2) ans++;
            if (r1<r2) ans++;
            cout << ans << endl;
        }
    }

    return 0;

}
