#include<bits/stdc++.h>
using namespace std ;
const int N = 1e2+5 ;

int n ,m ;
string str[N] ;
bool ok[N] ;
bool is(string a,string b)
{
    reverse(b.begin() ,b.end());
    return a==b ;
}
int main(){
    cin >> n >> m ;
    for(int i=0;i<n;++i) cin >> str[i] ;
    vector< pair<string,string> > ans ;
    for(int i=0;i<n;++i){
       if(ok[i]) continue ;
        for(int j=i+1;j<n;++j){
            if(ok[j]) continue ;
            if(is(str[i],str[j])){
                ok[j] = ok[i] = 1 ;
                ans.push_back({str[i],str[j]});
                break ;
            }
        }
    }

    string s = "" ;
    for(auto go:ans) s += go.first ;
    for(int i=0;i<n;++i){
        if(ok[i]) continue ;
        if(is(str[i],str[i])){
            s += str[i] ;
            break ;
        }
    }
   // for(auto e: ans) cout<<e.first<<' '<<e.second<<endl;
   // cout<<endl;
    reverse(ans.begin(),ans.end());
    for(auto go:ans) s += go.second ;
    cout << s.size() << endl << s ;
    return 0;
}
