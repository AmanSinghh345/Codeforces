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
   int a,b;
   cin>>a>>b;
   int operation=0;
   if(!a) {
    cout<<0<<endl;
    return;
   }
int ans=a+3;
int x,y;
for(int i=(b<2?2-b:0);i<ans;i++){
        y=b+i;
        x=a;
        operation=i;
        while(x){
            x/=y;
            operation++;
        }
        if(operation<ans) ans=operation;
}

    cout<<ans<<endl;
    return;


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