#include<bits/stdc++.h>
#define ll long long int
#define show(x) cout << #x << " : " << x << endl

using namespace std;

ll n,m,middle, tut;
ll A[60];
vector < ll > v;

ll BS(ll a)
{
      ll b = 0 , e = v.size()-1 , ans = -1;

      while(b<=e){
            ll mid = (b+e)/2;

            if (v[mid]<=a){
                  ans = max(ans,v[mid]);
                  b = mid+1;
            }
            else e = mid-1;
      }
      return ans;
}

int main()
{
      cin >> n >> m;

      for (int i=0;i<n;i++)cin >> A[i];

      middle = n/2;
      tut = n-middle;

      for (int i=0; i < ( 1<<(middle)) ; i++){
            ll sum = 0;

            for (int j=0;j<middle;j++){
                  ll k = (1<<j);

                  if ((i&k))
                        sum+=A[j];
            }

            sum%=m;

            v.push_back(sum);
      }

      sort(v.begin(),v.end());

      ll ans = 0 , cnt =0 ;

      for (int i=0;i<(1 << (tut)) ; i++){
            ll sum = 0;
            cnt++;

            for (int j=0;j<tut ; j++){
                  ll k = (1<<j);

                  if ((i&k))
                        sum+=A[j+middle];
            }


            sum%=m;

            ll t1 = (m-1-sum) , t2 = (m*2-1)-sum;

            ll temp1 = BS(t1) , temp2 = BS(t2);


            temp1+=sum;
            temp2+=sum;

            temp1%=m;
            temp2%=m;

            ans = max(ans,max(temp1,temp2));

      }
      cout << ans << endl;




      return 0;
}
