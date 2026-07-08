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
    string s="";
    cin>>s;
    int countDot=0;
    int totalDot=0;
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        if(s[i]=='.'){
            countDot++;
            totalDot++;
            maxi=max(countDot,maxi);
        }
        else countDot=0;
    }
 
    if(maxi>=3) cout<<2<<endl;
    else cout<<totalDot<<endl;
 
    
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