#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
 
    int total=0;
    int ans=0;
    for(int i=0;i<n;i++) {
        if(a[i]) total++;
    }
    if(total==n) {
        cout<<total-1<<"
";
        return 0;
    }
    int bestGain=INT_MIN;
    int currGain=0;
    for(int i=0;i<n;i++){
        int gain;
        if(a[i]) gain=-1;
        else gain=1;
        currGain=max(gain,currGain+gain);
        bestGain=max(bestGain,currGain);
    }
    cout<<bestGain+total<<"
";
    return 0;
}