#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    long long int r,g,b;
    cin >> r >> g >> b;
    vector<long long int>v;
    v.push_back(r);
    v.push_back(g);
    v.push_back(b);
    sort(v.begin(),v.end());
    int count = 0;
    if(2*v[0]<=v[2]){
        count +=v[0];
        v[2]-=2*v[0];
        if(v[2]>=2*v[1]){
            count += v[1];
        }
        else{
            count += (v[1]+v[2])/3;
        }
    }
    else{
        count += (v[1]+v[2]+v[0])/3;
    }
    cout << count ;
}
 
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 
int t=1;
while(t--){
    solve();
}
    
    return 0;
}
