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
    // Input
    int n;
     cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    set<int> st;
   
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        st.insert(a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        st.insert(b[i]);
    }
 
    // Logic
    map<int,int> map1;
    map<int,int> map2;
    int cnt = 1;
    map1[a[0]]=1;
    for (int i = 1; i < a.size(); i++)
    {   
        
        if (a[i - 1] == a[i] )
            cnt++;
        else{
            cnt = 1;
        }
        map1[a[i]]= max(cnt, map1[a[i]]);
    }
    map2[b[0]]=1;
    cnt=1;
    for(int i=1;i<b.size();i++){
        if(b[i-1]==b[i]) cnt++;
        else cnt=1;
        map2[b[i]]=max(cnt,map2[b[i]]);
    }
    int maxi=1;
    for(int e:st){
        maxi=max(maxi,map1[e]+map2[e]);
    }
    cout<<maxi<<endl;
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