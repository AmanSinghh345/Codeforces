 
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t, n, i, j, f, m;
    
    cin>>t;
    
    for(;t--;)
    {
        cin>>n;
        f=0;
        
        ll v[n+1];
        
        ll a[n];
        vector<ll> b, c;
        
        for(i=0; i<=n; i++)
        {
            v[i]=false;
        }
        
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]<=n){
                if(v[a[i]]==false)
                {
                    v[a[i]]=true;
                }else{
                    b.push_back(a[i]);
                }
            }else{
                b.push_back(a[i]);
            }
        }
        
        for(i=1; i<=n; i++)
        {
            if(v[i]==false){
                c.push_back(i);
            }
        }
        sort(b.begin(), b.end());
        
        m=b.size();
        
        for(i=0; i<m; i++)
        {
            if(2*c[i]>=b[i]){
                f++;
                break;
            }
        }
        
        if(f==0){
            cout<<m<<"
";
        }else{
            cout<<"-1
";
        }
        
    }
}