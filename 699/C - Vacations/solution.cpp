#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    vector<vector<int>> dp(n,vector<int>(3,0));
 
    if(a[0]==1) dp[0][1]=1;
    else if(a[0]==2) dp[0][2]=1;
    else if(a[0]==3) {
        dp[0][1]=1;
        dp[0][2]=1;
    }
    for(int i=1;i<n;i++){
        if(a[i]==0) {
            dp[i][0]=max({dp[i-1][0],dp[i-1][1],dp[i-1][2]});
            dp[i][1]=max({dp[i-1][0],dp[i-1][1],dp[i-1][2]});
            dp[i][2]=max({dp[i-1][0],dp[i-1][1],dp[i-1][2]});
        }
        else if(a[i]==1){
            dp[i][0]=max({dp[i-1][0],dp[i-1][1],dp[i-1][2]});
            dp[i][1]=max(dp[i-1][0]+1,dp[i-1][2]+1);
            dp[i][2]=max({dp[i-1][0],dp[i-1][1],dp[i-1][2]});
        }
        else if(a[i]==2){
            dp[i][0]=max({dp[i-1][0],dp[i-1][1],dp[i-1][2]});
            dp[i][1]=max({dp[i-1][0],dp[i-1][1],dp[i-1][2]});
            dp[i][2]=max(dp[i-1][0]+1,dp[i-1][1]+1);
        }
        else {
            dp[i][0]=max({dp[i-1][0],dp[i-1][1],dp[i-1][2]});
            dp[i][1]=max(dp[i-1][0]+1,dp[i-1][2]+1);
            dp[i][2]=max(dp[i-1][0]+1,dp[i-1][1]+1);
        }
    }
    int ans=max({dp[n-1][0],dp[n-1][1],dp[n-1][2]});
    cout<<n-ans<<"
";
    return 0;
}