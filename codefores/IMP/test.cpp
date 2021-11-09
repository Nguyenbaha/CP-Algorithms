#include <bits/stdc++.h>
using namespace std;
 #define int long long
 #define prec(n) fixed<<setprecision(n)
const int N = 2e5+5 ;
int T;

template <typename T> void print(vector <T> v) {
    for(int i = 0; i < v.size(); ++i)
        cout << v[i] << " \n"[i + 1 == v.size()];
}

// Here
bool ok( )
{

}
//here

void sol()
{
    int n;
    cin>>n;
    char a[n][n];
    bool b[n][n];
    for(int i=0;i<n;++i)
        for(int j=0;j<n;++j)
        cin>>a[i][j];
    int k=n-1;
        // pcess
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<n;++j)
        {
            if(a[i][j]=='*' && b[i][i]==0)
               // a[j][i]='*';
        a[i][(j+1)<=n/2 ? k-j : n-j]='*';
        b[i][(j+1)<=n/2 ? k-j : n-j]=1;
        }

    }


        // out
        for(int i=0;i<n;++i)
           {
               for(int j=0;j<n;++j)
                cout<<a[i][j];
                cout<<endl;
           }
        cout<<endl;
        cout<<endl;
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> T;
    while(T--)
{
    sol();
 }


}
