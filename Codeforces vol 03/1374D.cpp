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
///4direction ->        int del_x[]={-1,0,1,0},del_y[]={0,1,0,-1};
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

using namespace std;

int main()
{
      int tc;
      cin >> tc;

      while(tc--){

            ll n,k;
            cin >> n >> k;

            ll A[n+5] , sum = 0 , ans = 0;
            map < ll ,ll > mp;

            for (int i=1 ; i<=n ; i++){

                  cin >> A[i];
                  A[i] =  k - (A[i]%k);
                  if (A[i]==k)A[i] = 0;

                  if (A[i]==0)continue;

                  sum+=A[i];

                  ll temp = mp[A[i]]*k+A[i]+1;
                  ans = max(ans,temp);

                  mp[A[i]]++;
            }

            if (sum==0)cout << 0 << endl;
            else {
                  cout << ans << endl;
            }
      }



      return 0;
}
