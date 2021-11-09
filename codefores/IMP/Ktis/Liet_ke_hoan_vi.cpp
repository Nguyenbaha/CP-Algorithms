#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
int n,a[10001];
bool kt[10001];
void in()
{
    for(int i=1;i<=n;++i)cout<<a[i];
    cout<<endl;
}
void sinh(int pos)
{
        int i,j;
        for(i=1;i<=n;++i)
        {
            if(!kt[i])
            {
                kt[i] = true;
                a[pos] = i;
            }
            else continue;
            if(pos == n) in();
            else sinh(pos+1);
            kt[i]= false;
        }
}
void Never_give_up()

{
    cin>>n;
    ll s=1;
    for(int i=1;i<=n;++i)
        s*=i;
    cout<<s<<endl
;    sinh(1);
}

signed main() {
ios::sync_with_stdio(false);
cin.tie(0);

int tc=1;
//cin >> tc;
for (int iTest = 0; iTest <tc; ++iTest)
 {
Never_give_up();
 }

 return 0;
}


