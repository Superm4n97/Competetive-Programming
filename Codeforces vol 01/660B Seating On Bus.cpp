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
///4direction ->        int dx[]={-1,0,1,0},dy[]={0,1,0,-1};
#define input(v,n)      for (int i=0;i<n;i++){int a;cin >> a;v.push_back(a);}
#define inputll(v,n)    for (ll i=0;i<n;i++){ll a;cin >> a;v.push_back(a);}
#define vii             vector < int >
#define vll             vector < ll >
#define pii             pair < int , int >
#define mk              make_pair

using namespace std;

int a[6][105];

void make(int column, int begining , int n)
{
    for (int i=0;i<n;i++){
        a[column][i] = begining;
        begining+=2;
    }
}

int main()
{
    int n,m;
    cin >> n >> m;
    make(2,1,n);
    make(4,2,n);
    make(1,2*n+1,n);
    make(3,2*n+2,n);
    int tut = 0;

    for (int j=0;j<n;j++){
        if (tut==m)break;
        for (int i=1;i<=4;i++){
            if (a[i][j]>m)continue;
            if (tut==m)break;
            cout << a[i][j] << " ";
            tut++;
        }
        //cout << endl;
    }

    return 0;
}
