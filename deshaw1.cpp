#include <bits/stdc++.h>
using namespace std;
void solve(){
    string s,b;
    cin>>s;
    cin>>b;
    if(s.size()!=b.size()) {
        cout<<"NOT GOOD"<<"\n";
        return;
    }
    for(int i=0;i<s.size();i++){
        int val=s[i]-'a';
        int rem=val%3;
        int y=val-rem;
        int x=b[i]-'0';
        int rhs=3*(x - 1);
        if(y!=rhs){
            cout<<"NOT GOOD"<<"\n";
            return;
        }
    }
    cout<<"GOOD"<<"\n";
    return;
}
int main(){

    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}