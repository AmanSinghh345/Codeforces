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
    ll n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<int> b(n);
    for (int i = 0; i < n; i++)
        cin >> b[i];
    int cnt = 0;
    int ind;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < b[i])
        {
            cnt++;
            ind = i;
        }
    }
    if (cnt > 1)
    {
        cout << "NO" << "\n";
        return;
    }
    if (cnt == 0)
    {
        cout << "YES" << "\n";
        return;
    }
    int diffat;
    int mini=INT_MAX;
    int smini=-1;
    for(int i=0;i<n;i++){
        if(a[i]<b[i]) {
            diffat=b[i]-a[i];
        }
        else{
            if(mini>a[i]-b[i]){
                mini=a[i]-b[i];            }
        }

    }

    if(diffat>mini){
        cout<<"NO"<<endl;
        return;

    }
    else {
        cout<<"YES"<<endl;
        return;
    }



    // while (a[ind] < b[ind])
    // {
    //     for (int i = 0; i < n; i++)
    //     {
    //         if (i == ind)
    //             a[i]++;
    //         else
    //         {
    //             if (a[i] == 0)
    //             {
    //                 cout << "NO" << "\n";
    //                 return;
    //             }
    //             a[i]--;
    //         }
    //     }
    // }
    cout << "YES" << endl;
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