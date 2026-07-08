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
    ll n;
    cin>>n;
    vector<int> a(n);
    ll count0=0,count1=0,s=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        s+=a[i];
        if(a[i]==1) count1++;
        if(a[i]==0) count0++;
    } 
   
    if(count1==0){
        cout<<0<<endl;
        return;
    }
    else{
        
        cout<<count1*(1LL<<count0)<<endl;
        return;
    }
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