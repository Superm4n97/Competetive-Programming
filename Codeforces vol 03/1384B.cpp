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

using namespace std;


int main()
{
      ll tc;
      cin >> tc;

      while(tc--){

            ll n,k,l;
            cin >> n >> k >> l;

            ll A[n+5];
            bool sol = true;

            for (int i=1 ; i<=n ; i++){
                  cin >> A[i];

                  if (A[i]>l)sol = false;

                  A[i] = min(l-A[i],k);
            }

            if (!sol){
                  cout << "No" << endl;
                  continue;
            }
            ll temp = -A[1];
            for (int i=2 ; i<=n ; i++){
                  temp++;
                  if (A[i]==k)temp = -k;
                  else {
                        if (temp<=A[i]){
                              ll tut = A[i]*-1;
                              temp = max(temp,tut);
                        }
                        else {
                              sol = false;
                              break;
                        }
                  }
            }

            if (sol)cout << "Yes" << endl;
            else cout << "No" << endl;
      }


      return 0;
}
