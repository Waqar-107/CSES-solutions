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
    // freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m;

    sf(n);

    if(n == 1)
    {
        pf(1);
        return 0;
    }

    if(n < 4)
    {
        pfs("NO SOLUTION\n");
        return 0;
    }

    for(i = n - 1; i > 0; i -= 2)
        pf(i), pfs(" ");
    for(i = n; i > 0; i -= 2)
        pf(i), pfs(" ");

    return 0;
}
