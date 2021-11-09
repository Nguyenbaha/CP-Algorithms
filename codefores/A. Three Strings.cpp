#include<bits/stdc++.h>
using namespace std ;
const int N = 3e5+5 ;

int t ;
string a ,b ,c ;
int main(){
    cin >> t ;
    while(t--){
        cin >> a >> b >> c ;
        bool ok = 1 ;
        for(int i=0;i<a.size() && ok;++i){
            if(c[i]==a[i]) continue ;
            if(c[i]==b[i]) continue ;
            ok = 0 ;
        }
     if(ok)cout<<"YES";
     else cout<<"NO";
     cout<<endl;
    }
    return 0;
}
