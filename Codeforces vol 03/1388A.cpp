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

#define maxn            200005

using namespace std;

void nearlyPrime()
{

}

int main()
{

      int tc;
      cin >> tc ;
      while(tc--){

            ll n;
            cin >> n;

            if (n>30){
                  ll temp = n-30 , tut = 14;

                  if (temp==6 || temp==10 || temp==14){
                        temp--;
                        tut++;
                  }

                  cout << "YES" << endl;
                  cout << 6 << " " << 10 << " " << tut << " " << temp<< endl;
            }
            else cout << "NO" << endl;
      }


      return 0;
}
