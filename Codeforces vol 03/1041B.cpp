#include<bits/stdc++.h>
#define ll long long int
#define show(x) cout << #x << " : " << x << endl

using namespace std;

int main()
{
      ll a,b,x,y;
      cin >> a >> b >> x >> y;

      ll g = __gcd(x,y);
      x/=g;
      y/=g;

      cout << min(a/x,b/y) << endl;

      return 0;
}
/**

**/
