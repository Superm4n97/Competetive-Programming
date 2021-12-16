#include<bits/stdc++.h>
#define ll long long int
#define show(x) cout << #x << " : " << x << endl

using namespace std;

struct node
{
      ll cnt[2];
      node* next[2];

      node(){
            cnt[0] = cnt[1] = 0;
            next[0] = next[1] = NULL;
      }
};
node* root = new node();

void insertTrie(ll x, ll val)//increase cnt by val
{
      node* ptr = root;
      for (int i=31 ; i>=0; i--){
            int dig = (x>>i)&1;

            if(ptr->next[dig]==NULL)ptr->next[dig] = new node();
            ptr->cnt[dig]+=val;

            ptr = ptr->next[dig];
      }
      return;
}

ll quary(ll x)//finds the maximum xor value for x
{
      ll ans = 0;
      node* ptr = root;
      for (int i=31 ; i>=0 ; i--){//31 for integer
            int dig = (x>>i)&1;

            if (ptr->cnt[1-dig]!=0){
                  ans+=(1<<i);
                  ptr = ptr->next[1-dig];
            }
            else if(ptr->cnt[dig]) ptr = ptr->next[dig];
            else break;
      }
      return ans;
}

int main()
{
      ll n;
      cin >> n;

      insertTrie(0,1);//kisur sathe xor na hole ei zero er sathe hobe

      for (int i=0; i<n; i++){
            char ch;
            ll x;
            cin >> ch >> x;

            if (ch=='+')insertTrie(x,1);
            else if (ch=='-')insertTrie(x,-1);
            else cout << quary(x) << endl;
      }

      return 0;
}
