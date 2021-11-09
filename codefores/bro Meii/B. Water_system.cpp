#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁

void Never_give_up()

{

}

signed main() {
ios::sync_with_stdio(false);
cin.tie(0);
 long long n,s;
long long A,B;
ll a[N];
cin >> n >> A >> B;
        for (int i=0;i<n;i++)
            {
                cin >> a[i];
                s=s+a[i];
            }
        if ((a[0]*A)/s >=B)
        {
                cout <<"0";
                return 0;
        }
        else
        {
            int i=1;
            sort(a+1,a+n,greater<int>());
            while (a[0]*A/s < B)
            {
                s=s-a[i];
                i++;
            }
            cout << i-1;
        }

 return 0;
}



