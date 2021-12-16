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
#define inf8            100000008

#define maxn            100005

using namespace std;

int main()
{
    ll n,m;
    cin >> n >>m;
    string s;
    cin >> s;
    map < char , ll > mp;
    for (int i=0;i<m;i++){
        char c;
        cin >> c;
        mp[c]++;
    }
    ll temp = 0,ans=0;
    for (int i=0;i<n;i++){
        if (mp[s[i]]==0){
            ans+=(temp+1)*temp/2;
            temp = 0;
        }
        else temp++;
    }
    ans+=temp*(temp+1)/2;
    cout << ans << endl;

    return 0;
}
