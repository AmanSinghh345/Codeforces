#include <bits/stdc++.h>
using namespace std;
 
// Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
 
// Macros
#define rep(i, j) for (int i = 0; i < j; i++)
#define rrep(i, j) for (int i = j - 1; i >= 0; i--)
#define all(x) x.begin(), x.end()
 
// Typedef
typedef long long ll;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef map<int, int> mii;
 
void answertoProb()
{
    unsigned long long int n,mini=2e18,maxi=0;;
        cin>>n;
        if(n%2!=0 || n<4) cout<<-1<<endl;
        else{
            if(n%6==0){
                mini=n/6;  
                if(n/6==1) maxi=1;
            } 
            if(n%4==0){
                maxi=n/4;
                if(n/4==1) mini=1;
            } 
            if(n%6==4 || n%6==2) mini=min(mini,n/6+1);
            if(n%4==2) maxi=max(maxi,n/4);
            cout<<mini<<" "<<maxi<<endl;
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