#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int k, n, w;
    cin >> k >> n >> w;
    int ans = 0, x ;
    for (int i = 1; i <= w; i++) {
        x = k*i ;
        ans = ans + x ;
    } 
    if ((ans - n) < 0){
        cout << 0;
    }
    else cout << ans - n ;
    return 0;
}