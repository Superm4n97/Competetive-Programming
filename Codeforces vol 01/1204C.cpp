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
    vll v, ans;
    string s[105];
    ll n , m;
    cin >> n;
    for (int i=0;i<n;i++){
        cin  >> s[i];
    }
    cin >> m;
    inputll(v,m);
    ll a = v[0];
    ans.pb(v[0]);

    for (int i=0;i<m-2;i++){
        ll tut = ans.size()-1;
        if (s[v[i]-1][v[i+2]-1] == '1' || v[i]==v[i+2] || ans[tut]==v[i+2]){
            ans.pb(v[i+1]);
        }
    }
    ans.pb(v[m-1]);
    cout << ans.size() << endl;
    for (int i=0;i<ans.size();i++){
        cout << ans[i] << " ";
    }

    return 0;
}
