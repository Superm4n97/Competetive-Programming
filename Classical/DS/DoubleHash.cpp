#include<bits/stdc++.h>
#define ll long long int
#define show(x) cout << #x << " : " << x << endl
#define base1 163
#define base2 173
#define mod1 1000000021
#define mod2 1000000087
#define maxn 50004

using namespace std;

ll hashArray1[maxn],hashArray2[maxn] , P1[maxn] , P2[maxn];

ll amodb(ll a, ll b)
{
      ll temp = a/b;
      return a-temp*b;
}

void createDoubleHash(string s)//reads left to right, like decimal number system
{
      hashArray1[0] = hashArray2[0] = s[0];
      for (int i=1 ; i<s.size(); i++){
            ll dig = s[i];
            hashArray1[i] = amodb(hashArray1[i-1]*base1 + dig,mod1);
            hashArray2[i] = amodb(hashArray2[i-1]*base2 + dig,mod2);
      }
      return;
}

pair<ll,ll> rangeQuery(ll l, ll r)
{
      ll temp1 , temp2;
      if (l==0){
            temp1 = hashArray1[r];
            temp2 = hashArray2[r];
      }
      else {
            temp1 = amodb(hashArray1[l-1]*P1[r-l+1],mod1);
            temp2 = amodb(hashArray2[l-1]*P2[r-l]+1,mod2);

            temp1= amodb(hashArray1[r]-temp1+mod1,mod1);
            temp2= amodb(hashArray2[r]-temp2+mod2,mod2);
      }
      return {temp1,temp2};
}

int main()
{
      {///reserved
            P1[0] = P2[0] = 1;
            for (int i=1 ; i<maxn ; i++){
                  P1[i] = amodb(P1[i-1]*base1,mod1);
                  P2[i] = amodb(P2[i-1]*base2,mod2);
            }
      }
      /**if createDoubleHash() is called with string s, it creates two
      arrays hashArray1 and hashArray2 from left to right where [0]
      index is the most significant number
      **/


      return 0;
}
