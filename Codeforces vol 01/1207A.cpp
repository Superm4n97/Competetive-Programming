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
#define mk              make_pair
#define inf8            100000008

using namespace std;

int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll b,f,p,h,c;
        ll ans = 0;
        cin >> b  >> p >> f;
        cin >> h >> c;
        if (h>c){
            ans+= min(b/2,p)*h;
            b = max(0LL,b-p*2);
            ans+=min(b/2,f)*c;
        }
        else {
            ans+=min(b/2,f)*c;
            b = max(0LL,b-f*2);
            ans+= min(b/2,p)*h;
        }
        cout << ans << endl;
    }

    return 0;
}
