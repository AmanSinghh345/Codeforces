#include <bits/stdc++.h>
using namespace std;
 
//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
 
//Macros
#define rep(i,j) for(int i=0;i<j;i++)
#define rrep(i,j) for(int i=j-1;i>=0;i--)
#define all(x) x.begin(), x.end()
 
//Typedef
typedef long long ll;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef map<int,int> mii;
 
void answertoProb()
{
    string s="";
    cin>>s;
    int n=s.size();
    int count0=0;
 
    for(int i=0;i<n;i++)
    {
     if(s[i]=='0') count0++;  
    }
    int count1=n-count0;
    int maxi=max(count1,count0) ;
    int mini=min(count1,count0);
    if(maxi==n) cout<<"NET"<<endl;
    else if(mini%2!=0) cout<<"DA"<<endl;
    else cout<<"NET"<<endl;
    return ;
}
 
int32_t main()
{
    fastio();
    int t;
    cin >> t;
    while (t--)
    {
        answertoProb();
    }
    return 0;
}