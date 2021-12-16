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
#define show(x) cout << #x << " : " << x << endl
#define mk              make_pair
#define inf             10000000000000016

#define maxn            1000006

using namespace std;

int main()
{
      ll tc;
      cin >> tc;

      while(tc--){
            ll n;
            cin >> n;

            ll A[n+5];
            ll D[n+5];
            ll vis[n+5];
            memset(vis,0,sizeof vis);

            for (int i=1 ; i<=n;i++){
                  cin >> A[i];
                  D[A[i]] = i;
            }

            bool solution = true;

            for (int i = 1;i<=n;i++){
                  ll id = D[i];

                  if (vis[i])continue;
                  vis[i] = 1;

                  int j = id+1;

                  for (;j<=n; j++){
                        if (A[j]<A[j-1])break;

                        if (A[j]==A[j-1]+1){
                              vis[A[j]] = 1;
                        }
                        else {
                              solution = false;
                              break;
                        }
                  }
            }

            cout << (solution?"Yes":"No") << endl;
      }




      return 0;
}
