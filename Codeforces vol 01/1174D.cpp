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
#define inf8            100000008

using namespace std;

int A[300000];
vii v;

int main()
{
    int n , x;
    cin >> n >> x;
    A[0] = 1;
    v.pb(0);
    for (int i = 1 ; i<(1<<n) ; i++){
        if (A[i^x])continue;
        v.pb(i);
        A[i] = 1;
    }
    cout << v.size()-1 << endl;
    for (int i=1;i<v.size();i++)cout << (v[i]^v[i-1]) << " ";

    return 0;
}
