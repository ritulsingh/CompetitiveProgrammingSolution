#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int t;
    cin >> t;
    while(t--){
        int x, r, m;
        cin >> x >> r>>m;
        if(x>= 60*r){
            if(r<=m)
                cout << "Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
        else{
            if(x+2*(60*r-x) <= 60*m)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
    }
}