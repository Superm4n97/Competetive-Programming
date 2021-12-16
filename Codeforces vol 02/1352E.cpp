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

int n,A[8005];
int mark[8005];

int main()
{
      int tc;
      cin >> tc;

      while(tc--){
            scl(n);
            for (int i=1; i<=n; i++){
                  scl(A[i]);
                  mark[A[i]]++;
            }
            for (int i=1 ; i<=n;i++)A[i]+=A[i-1];

            ll cnt = 0;

            for (int i=2 ; i<=n ; i++){
                  for (int j = i ; j<=n ; j++){
                        ll temp = (A[j]-A[j-i]);
                        if (temp<=n && mark[temp]){
                              cnt+=mark[temp];
                              mark[temp] = 0;
                        }
                  }
            }
            printf("%I64d\n",cnt);
            for (int i=1; i<=n; i++)mark[i] = 0;
      }




      return 0;
}
