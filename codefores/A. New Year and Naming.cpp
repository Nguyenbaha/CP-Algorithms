#include<bits/stdc++.h>
using namespace std ;
const int N = 1e2+5 ;

int n ,m ;
string a[N] ,b[N] ;
int main(){
    cin >> n >> m ;
    for(int i=0;i<n;++i) cin >> a[i] ;
    for(int i=0;i<m;++i) cin >> b[i] ;
    int q ;
    scanf("%d",&q);
    while(q--){
        int x ;
        scanf("%d",&x);
        --x ;
        cout << a[x%n] << b[x%m] << endl ;
    }
    return 0;
}
