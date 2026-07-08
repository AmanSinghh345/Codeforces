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
    int n;
    cin>>n;
    vector<int> a(n);
    int cnt=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==2) cnt++;
    }
    if(cnt%2==1) {
        cout<<-1<<endl;
        return;
    }
    if(cnt==0) {
        cout<<1<<endl;
        return;
    }
    int temp=0;
    int k=0;
    for(int i=0;i<n;i++){
        if(a[i]==2) temp++;
        if(temp==cnt/2){
             k=i+1;
             cout<<k<<endl;
             return;
 
        }
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