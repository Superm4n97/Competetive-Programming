#include <bits/stdc++.h>
#define pb(a)           push_back(a)
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
#define mk              make_pair

using namespace std;

string s;

int main()
{
    ll n;
    cin >> n;
    cin >> s;
    set < char > st;
    for (int i=0;i<n;i++)st.insert(s[i]);

    ll f=1,l=1;
    for (int i=1;i<n;i++){
        if (s[i]!=s[i-1])break;
        f++;
    }
    for (int i=n-2;i>=0;i--){
        if (s[i]!=s[i+1])break;
        l++;
    }

    if (s[0]==s[n-1]){
        cout << (f*(l+1)+l+1)%998244353  << endl;
        //cout << "ok " << endl;
    }
    else{
        cout << (f+l+1)%998244353  << endl;
        //cout << "ok2 " << endl;
    }
    return 0;
}
