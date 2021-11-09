#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
void ha()
{
    vector<int>a(4);
    for(int i=0;i<4;++i)
        cin>>a[i];

    sort(a.begin(),a.end());

    cout<<a[3]-a[0]<<' '<<a[3]-a[1]<<' '<<a[3]-a[2];

}
int main()
{

std::ios::sync_with_stdio(false);
cin.tie(0);cout.tie(0);

ha();
return 0;
}





