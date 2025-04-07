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
    vector<int> b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    set<int> stt1;
    set<int> stt2;
    for(int i=0;i<n;i++){
        stt1.insert(a[i]);
    }
    for(int i=0;i<n;i++){
        stt2.insert(b[i]);
    }
    if(stt1.size()>=3 or stt2.size()>=3) {
        cout<<"YES"<<endl;
        return;
    }
    else if(stt1.size()==2 and stt2.size()==2){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
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