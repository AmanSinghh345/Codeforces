#include <bits/stdc++.h>
using namespace std;

// Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)

// Macrosf
#define rep(i, j) for (int i = 0; i < j; i++)
#define rrep(i, j) for (int i = j - 1; i >= 0; i--)
#define all(x) x.begin(), x.end()

// Typedefs
typedef long long ll;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef map<int, int> mii;

int answertoProb()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int cnt = 0;
    bool flag = false;
    for (int i = 0; i < n;)
    {
        if (arr[i] == 0)
        {
            cnt++;
            i++;
            flag = true;
            continue;
        }
        int sum = arr[i];
        int j;
        for (j = i + 1; j < n; j++)
        {

            sum += arr[j];
            if (sum == 0)
            {
                cnt++;
                break;
            }
        }
        if (sum == 0)
            i = j + 1;
        else
            i++;
    }
    if (flag)
        cnt++;
    return cnt;

    //     int cnt = 0;
    //     bool flag=false;

    //     for (int i = 0; i < n;)
    //     {
    //         int sum = 0;
    //         int j;
    //         for (j = i; j < n; j++)
    //         {
    //             sum += arr[j];
    //             if (arr[j] == 0)
    //             {   flag=true;
    //                 cnt++;
    //                 break;
    //             }
    //             if (sum == 0 && i != j)
    //             {  flag=true;
    //                 cnt++;
    //                 break;
    //             }
    //         }
    // if(flag)
    //         i = j + 1;
    //         else i++;
    //     }

    //     return cnt;
}

int32_t main()
{
    fastio();
    int t;
    cin >> t;
    while (t--)
    {
        cout << answertoProb() << endl;
    }
    return 0;
}
