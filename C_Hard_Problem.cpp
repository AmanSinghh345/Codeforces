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
    int m,a,b,c;
    cin>>m>>a>>b>>c;
    int row1=m;
    int row2=m;
    int ans=0;
    int f=min(row1,a);
    int s=min(row2,b);
    ans+=f+s;
    if(row1>f){
        ans+=min(c,row1-f);
        c-=row1-f;
    }
    if(row2>s){
        if(c>0)
        ans+=min(c,row2-s);

    }
    
    // while(a-- && row1>0){
    //     row1--;
    //     ans++;
    // }
    // while(b-- && row2>0){
    //     row2--;
    //     ans++;
    // }
    // int left=row1+row2;
    // ans=ans+min(left,c);
    cout<<ans<<endl;

    // int left1=m-a;
    // int right1=m-b;
    // int cleft=0;
    // if(left1<=0) ans+=a;
    // if(right1<=0) ans+=b;

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