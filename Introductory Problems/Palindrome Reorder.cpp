/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 200001
#define inf 1e9

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d",n)
#define pff(n,m) printf("%d %d",n,m)
#define pffl(n,m) printf("%I64d %I64d",n,m)
#define pfl(n) printf("%I64d",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<int, int>

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m;
    string s;

    cin >> s;
    n = s.length();

    int cnt[26];
    memset(cnt, 0, sizeof(cnt));

    for(i = 0; i < n; i++)
        cnt[s[i] - 'A']++;

    k = -1;
    for(i = 0; i < 26; i++)
    {
        if(cnt[i] % 2)
        {
            if(k != -1)
            {
                pfs("NO SOLUTION");
                return 0;
            }

            k = i;
        }
    }

    string ans = "";

    // no odds can be placed
    if(n % 2 == 0 && k != -1)
    {
        pfs("NO SOLUTION");
        return 0;
    }

    // single odd, rest are even, n is odd
    while(k != -1 && cnt[k]--){
        ans.pb(k + 'A');
    }

    // all are even, n is even
    for(i = 0; i < 26; i++)
    {
        if(k == i) continue;

        string temp;
        for(j = 0; j < cnt[i] / 2; j++) temp.pb(i + 'A');

        ans = temp + ans;
        for(j = 0; j < cnt[i] / 2; j++) ans.pb(i + 'A');
    }

    cout << ans;

    return 0;
}
