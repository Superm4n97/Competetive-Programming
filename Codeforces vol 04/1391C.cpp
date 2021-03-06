#include <bits/stdc++.h>
#define pb              push_back
#define ll              long long int
#define scd(a)          scanf("%d",&a)
#define mp(a,b)         make_pair(a,b)
#define scl(w)          scanf("%I64d",&w)
#define scdd(a,b)       scanf("%d %d",&a,&b)
#define srt(a)          sort(a.begin(),a.end())
#define rsrt(a)         sort(a.rbegin(),a.rend())
#define scll(a,b)       scanf("%I64d %I64d",&a,&b)
///4direction ->        int dx[]={-1,0,1,0},dy[]={0,1,0,-1};
#define input(v,n)      for (int i=0;i<n;i++){int a;cin >> a;v.push_back(a);}
#define inputll(v,n)    for (ll i=0;i<n;i++){ll a;cin >> a;v.push_back(a);}
#define vii             vector < int >
#define vll             vector < ll >
#define pii             pair < int , int >
#define pll             pair < ll , ll >
#define show(x)         cout << #x << " : " << x << endl
#define mk              make_pair
#define inf             10000000000000016

#define maxn            1000006
#define mod 1000000007

using namespace std;

ll F[maxn] , P[maxn];

int main()
{
      F[0] = 1;
      P[0] = 1;

      for (int i=1 ; i<maxn ; i++){
            F[i] = F[i-1]*i;
            P[i] = P[i-1]*2;
            F[i]%=mod;
            P[i]%=mod;
      }

      ll n;
      cin >> n;

      ll ans = F[n] - P[n-1];

      if (ans<0)ans+=mod;

      cout << ans << endl;


      return 0;
}
