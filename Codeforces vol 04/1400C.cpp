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
      int tc;
      cin >> tc;

      while(tc--){

            string s;
            cin >> s;

            ll x;
            cin >> x;

            ll n  = s.size();
            ll must[n+7];

            for (int i=0 ; i<=n+4 ; i++)must[i] = 1;

            for (int i=0 ; i<n ; i++){
                  if (s[i]=='0'){

                        if (i+x<n)must[i+x] = 0;
                        if (i-x>=0)must[i-x] = 0;
                  }
            }

            bool ans = true;

            for (int i=0 ; i<n ; i++){

                  if (s[i]=='1'){
                        bool sol = false;

                        if (i+x<n){
                              if (must[i+x]==1)sol = true;
                        }
                        if (i-x>=0){
                              if (must[i-x]==1)sol = true;
                        }

                        if (!sol)ans = false;
                  }
            }

            if (!ans)cout << -1 << endl;
            else {
                  for (int i=0 ; i<n ; i++)cout << must[i] ;
                  cout << endl;
            }
      }


      return 0;
}

/**

*/
