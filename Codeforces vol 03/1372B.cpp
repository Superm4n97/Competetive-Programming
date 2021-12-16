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

            ll n;
            cin >> n;

            if (n%2==0){
                  cout << n/2 << " " << n/2 << endl;
            }
            else {
                  ll ans = n-1 , x = 1 , y = n-1;
                  for (ll i=1 ; i*i<=n ; i++){
                        if (n%i==0){
                              ll a = i , b = n-i;
                              ll g = __gcd(a,b);
                              ll lcm = a*b/g;
                              if (lcm<ans){
                                    ans = lcm;
                                    x = a,y = b;
                              }

                              ll c = n/i;
                              ll d = n-c;

                              g = __gcd(c,d);
                              lcm = c*d/g;
                              if (lcm<ans){
                                    ans = lcm;
                                    x = c,y = d;
                              }
                        }
                  }
                  cout << x << " " << y << endl;
            }
      }


      return 0;
}
