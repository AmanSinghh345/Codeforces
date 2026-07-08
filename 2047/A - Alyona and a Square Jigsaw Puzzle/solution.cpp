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
    int ans=0;
    int sum=0;
    int temp;
    while(n--){
        cin>>temp;
        sum+=temp;
        for(int i=1;i<INT_MAX;i=i+2){
        if(sum==i*i){
            ans++;
            break;
        }if(sum<i) break;
        }
    }
    cout<<ans<<endl;
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