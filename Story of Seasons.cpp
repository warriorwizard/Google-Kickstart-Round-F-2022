#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

ll BE(ll a, ll b)
{
  ll res = 1;
  while (b > 0)
  {
    if (b & 1)
    {
      res = (res * a * 1LL) ;
    }
    a = (1LL * a * a) ;
    b = b >> 1;
  }
  return res;
}

void solve()
{
   int d,n,x;
  cin>>d>>n>>x;
  vector<pair<pair<int,int>,int>> vp;
  for(int i=0;i<n;i++)
  {
      int q,l,v;
      cin>>q>>l>>v;
      vp.push_back({{q,l},v});
   }
   ll mx=0;
   int power=BE(2,n)-1;
   for(int i=0;i<=power;i++){
        set<int> st;
        for(int j=0;j<=n-1;j++){
           if((i&(1<<j))>=1){
              st.insert(j);
           }
        }
        vector<pair<int,int>> vp1;
        for(int k=0;k<n;k++){
         if(st.count(k)>=1){
            vp1.push_back({vp[k].first.second,vp[k].second});
         }
        }
      sort(vp1.begin(),vp1.end());
      int ind=1;  
      ll ans=0;
      for(int h=vp1.size()-1;h>=0;h--){
           if(vp1[h].first+ind<=d){
              ind++;
              ans+=vp1[h].second;
           }
      }
      mx=max(mx,ans);
   }
   cout<<mx;
}

int main()
{
    //freopen("a.txt","r",stdin);
    ll t;
    cin>>t;
    for(ll iop=1;iop<=t;iop++)
    {
        cout<<"Case #"<<iop<<": ";
        solve();
        cout<<endl;
    }
}
