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
    int n,m;
    cin>>n>>m;
    int ans=0;
    if(n==1){
        cout<<4*m<<"\n";
        return;
    }
    vector<int> x(n);
    vector<int> y(n);
    for(int i=0;i<n;i++){
        cin>>x[i]>>y[i];
    }
    int total=n*m*m;
    int overlap=0;
    for(int i=1;i<n;i++){
        int a=m-x[i];
        int b=m-x[i];
        overlap+=(a*b);
    }
    overlap=overlap*2;
    cout<<total-2*overlap<<"\n";
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