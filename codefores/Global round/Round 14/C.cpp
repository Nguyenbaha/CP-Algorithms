#include <bits/stdc++.h>
using namespace std;

int N,M,X;
int H[100001];

void solve(){
  cin>>N>>M>>X;
  cout<<"YES"<<endl;
  set<pair<int,int>>s; //stores pairs of (height, index)
  for (int i=1;i<=M;i++)
    s.insert({0,i});
//    for(auto e: s)
//    {
//        cout << e.first <<' '<<e.second<<endl;
//    }
//    return;
  for (int i=0;i<N;i++){
    cin>>H[i];
    pair<int,int>p=*s.begin();
    cout<<"p: "<<p.first<<' '<<p.second<<endl;
    s.erase(p);
    //cout<<p.second<<' ';
    s.insert({p.first+H[i],p.second});
  }
  cout<<endl;
}

int main(){
  int T; cin>>T;
  while (T--)
    solve();
}
