#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s,q;
		cin>>s>>q;
		int n1=s.size();
		int n2=q.size();
		int N=max(n1,n2);
		int n=min(n1,n2);
		
		int cnt=0;
		for(int i=0;i<n;i++){
			if(s[i]!=q[i]){
				break;
			}
			cnt++;
		}
        if(cnt==0) cout<<n1+n2<<endl;
        else
		cout<<N+(n-cnt+1)<<endl;
	}
	return 0;
}