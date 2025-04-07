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
    string a="";
    cin>>a;
    string b="";
    for(int i=0;i<a.size();i++){
        if(a[i]=='p') b+='q';
       else if(a[i]=='w') b+='w';
    else if(a[i]=='q') b+='p';
    }
    reverse(b.begin(),b.end());
    cout<<b<<endl;
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