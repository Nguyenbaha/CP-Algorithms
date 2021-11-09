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
//5 / 4  1 1 2 2 2
void sol()
{
    int n,k;
    cin>>n>>k;
    if(k%n==0)
    {
        cout<<k/n<<endl;
        return;
    }
    if(n<k)
    {
        cout<<k/n + (k%n==0 ? 0: 1)<<endl;
        return;
    }
    if(n>k)
    {
        if(n%k==0)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<2<<endl;
        }
    }
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
