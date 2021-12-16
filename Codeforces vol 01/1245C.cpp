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
#define mod             1000000007

using namespace std;

ll A[maxn];
ll F[maxn];

int main()
{
    F[0] = F[1] = 1;
    for (int i=2;i<maxn;i++){
        F[i] = F[i-1]+F[i-2];
        F[i]%=mod;
    }
    string s;
    cin >> s;
//    if (s.size()==1){
//        if (s[0]=='u' || s[0]=='n'){
//            cout << 0 << endl;
//            return 0;
//        }
//    }
    ll n= s.size();
    for (int i=0;i<n;i++){
        if (s[i]=='m' || s[i]=='w'){
            cout << 0 << endl;
            return 0;
        }
        if (i==0)A[1] = 1;
        else if (s[i]=='u' && s[i-1]=='u'){
            A[i+1] = A[i]+1;
            A[i] = 1;
        }
        else if (s[i]=='n'&& s[i-1]=='n'){
            A[i+1] = A[i]+1;
            A[i]=1;
        }
        else A[i+1] = 1;
    }
//    for (int i=0;i<=n;i++)cout << F[i] << " ";
//    cout << endl;

    ll ans = 1;
//    for (int i=1;i<=n;i++){
//        if (A[i]==1)continue;
//        if (A[i]%2){
//            A[i] = (A[i]+1)/2+1;
//        }
//        else {
//            A[i] = 2;
//        }
//    }
    for (int i=1;i<=n;i++){
        ans*=(F[A[i]]);
        //ans*=A[i];
        ans%=mod;
    }
    cout << ans << endl;



    return 0;
}
