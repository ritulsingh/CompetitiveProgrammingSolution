#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int t;
    cin >> t;
    while (t--){
        int a, y, x;
        cin >> a >> y >> x;
        if (a >= y){
            cout << x*y<<endl;
        }
        else{
            cout << x * a + 1 << endl;
        }
    }
}