#include<bits/stdc++.h>
using namespace std;
#define MAX 1000006
#define maxn 1000006
#define mod 1000000007
#define ll long long int

int wa[MAX],wb[MAX],wv[MAX],Ws[MAX];
int cmp(int *r,int a,int b,int l) {return r[a]==r[b] && r[a+l]==r[b+l];}

//(1-indexed) sa[i] = starting position (0...n-1) of ith lexicographically smallest suffix in s
//(0-indexed) Rank[i] = lexicographical rank of s[i....n-1] ((i+1)th suffix by position)
//LCP[i] = longest common prefix of sa[i] & sa[i-1]
int sa[MAX],Rank[MAX],LCP[MAX];

//Suffix Array (O(nlogn))
//m = maximum possible ASCII value of a string character (alphabet size)
//also, m = maximum number of distinct character in string (when compressed)
void buildSA(string s,int* sa,int n,int m){
    int i,j,p,*x=wa,*y=wb,*t;
    for(i=0; i<m; i++) Ws[i]=0;
    for(i=0; i<n; i++) Ws[x[i]=s[i]]++;
    for(i=1; i<m; i++) Ws[i]+=Ws[i-1];
    for(i=n-1; i>=0; i--) sa[--Ws[x[i]]]=i;
    for(j=1,p=1; p<n; j<<=1,m=p){
        for(p=0,i=n-j; i<n; i++) y[p++]=i;
        for(i=0; i<n; i++) if(sa[i]>=j) y[p++]=sa[i]-j;
        for(i=0; i<n; i++) wv[i]=x[y[i]];
        for(i=0; i<m; i++) Ws[i]=0;
        for(i=0; i<n; i++) Ws[wv[i]]++;
        for(i=1; i<m; i++) Ws[i]+=Ws[i-1];
        for(i=n-1; i>=0; i--) sa[--Ws[wv[i]]]=y[i];
        for(t=x,x=y,y=t,p=1,x[sa[0]]=0,i=1; i<n; i++)
            x[sa[i]]=cmp(y,sa[i-1],sa[i],j) ? p-1 : p++;
    }
}

//Kasai's LCP algorithm (O(n))
void buildLCP(string s,int *sa,int n){
    int i,j,k=0;
    for(i=1; i<=n; i++) Rank[sa[i]]=i;
    for(i=0; i<n; LCP[Rank[i++]]=k)
        for(k?k--:0, j=sa[Rank[i]-1]; s[i+k]==s[j+k]; k++);
    return;
}

ll csum[maxn] , P[maxn];

ll amod(ll a)
{
      return a - a/mod*mod;
}

int main()
{
      P[0] = 1;
      for (int i=1 ; i<maxn ; i++)P[i] = amod(P[i-1]*26);
      for (int i=1 ; i<maxn ; i++)P[i] = amod(P[i-1]+P[i]);

      int tc;
      scanf("%d",&tc);

      for (int _t=1 ; _t<=tc ; _t++){
            string s;
            cin >> s;
            int n=s.size();
            buildSA(s,sa,n+1,130); //Important
            buildLCP(s,sa,n);

            memset(csum,0,sizeof csum);

            for (int i=1 ; i<=n ; i++){
                  csum[LCP[i]+1]++;
                  csum[n-sa[i]+1]--;
//                  cout << "range : " << LCP[i]+1 << " " << n-sa[i]+1 << endl;
            }

            for (int i=1 ; i<maxn ; i++)csum[i] = amod(csum[i]+csum[i-1]);
            for (int i=1 ; i<maxn ; i++)csum[i] = amod(csum[i]+csum[i-1]);

//            cout << "csum : ";
//            for (int i=1 ; i<=5 ; i++)cout << csum[i] << " ";cout << endl;

            ll q;
            scanf("%lld",&q);
            printf("Case %d:\n",_t);
            while(q--){
                  ll l,r;
                  scanf("%lld %lld",&l,&r);
                  printf("%lld\n",amod(amod(P[r]-P[l-1]+mod)-amod(csum[r]-csum[l-1]+mod)+mod));
            }

//            cout << s << endl;
//            for(int i=1;i<=n;i++) cout<<sa[i]<<" "; cout<<endl;
//            for(int i=0;i<n;i++) cout<<Rank[i]<<" "; cout<<endl;
//            for(int i=1;i<=n;i++) cout<<LCP[i]<<" ";
      }
}
