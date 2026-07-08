#include <bits/stdc++.h>
using namespace std;
int a[100000];
int main(){
    a[1]=1;
    int sum=1,j=2;
    for(int i=2;j<=1e5;i++){
        sum=sum*2+2;
        while(j<=sum && j<=1e5){
            a[j]=i;
            j++;
        }
    }
int t;
cin>>t;
while(t--){
int n;
cin>>n;
cout<<a[n]<<endl;
       
   }
}