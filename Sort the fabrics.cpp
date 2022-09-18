#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
int q=t;
while(t--){
int n;
cin>>n;
string s;
int x,y;
vector<pair<string,int>>v1;
vector<pair<int,int>>v2;
for(int i=0;i<n;i++)
{
cin>>s>>x>>y;
v1.push_back(make_pair(s,y));
v2.push_back(make_pair(x,y));
}
sort(v1.begin(),v1.end());
sort(v2.begin(),v2.end());
int c=0;
for(int i=0;i<n;i++)
{
if(v1[i].second==v2[i].second)
c++;
}
cout<<"Case #"<<q-t<<":"<<" "<<c<<endl;

}
return 0;
}
