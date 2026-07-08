#include <bits/stdc++.h>
using namespace std;
int N=1e3+7;
vector<bool> prime(N,true);
void precompute(){
    prime[0]=prime[1]=false;
    for(int i=2;i*i<=N;i++){
        if(prime[i]){
            for(int j=i*i;j<=N;j+=i){
                prime[j]=false;
            }
        }
    }
}
int main(){
    precompute();
    int n;
    cin>>n;
    vector<int> ans;
 
    for(int i=1;i<=n;i++){
        
        if(prime[i]){
            ans.push_back(i);
            for(int j=i*i;j<=n;j*=i){
                ans.push_back(j);
            }
        }
    }
    cout<<ans.size()<<"
";
    for(int i=0;i<(int)ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}