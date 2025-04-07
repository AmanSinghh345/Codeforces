#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int num=0;
    while(n--){
        string s;
        cin>>s;
        if(s=="X++" or s=="++X") num++;
        else num--;
    }
    cout<<num<<endl;
}