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
            string s;
            cin >> s;
            ll ans = inf;

            ll one = 0 , two = 0 , three = 0,x = 0 , y = 0;

            if (s[0]=='1')one++;
            if (s[0]=='2')two++;
            if (s[0]=='3')three++;

            while(true){
                  x++;
                  if (x>=s.size())break;

                  if (s[x]=='1')one++;
                  else if (s[x]=='2')two++;
                  else three++;

                  while(true){
                        if (s[y]=='1' && one>1){
                              one--;
                              y++;
                              continue;
                        }
                        if (s[y]=='2' && two>1){
                              two--;
                              y++;
                              continue;
                        }
                        if (s[y]=='3' && three>1){
                              three--;
                              y++;
                              continue;
                        }

                        break;
                  }
                  if (one && two && three)ans = min(ans,x-y+1);
            }

            if (ans == inf)ans = 0;

            cout << ans << endl;
      }




      return 0;
}
