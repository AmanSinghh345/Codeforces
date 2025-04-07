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
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    bool flag=false;
    if( is_sorted(arr.begin(),arr.end())) flag=true;
    if(!flag) {
        cout<<0<<endl;
        return;
    }
    int mini=INT_MAX;
    int diff;
    for(int i=0;i<n-1;i++){
        diff=abs(arr[i]-arr[i+1]);
        mini=min(mini,diff);
    } 
    cout<<abs((mini/2))+1<<endl;
    return;
    // if(mini==0) {
    //     cout<<1<<endl;
    //     return;
    // }
    // cout<<min(mini,n)<<endl;
    // return;
    
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