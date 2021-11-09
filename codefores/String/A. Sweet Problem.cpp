#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
void ha()
{
int tc; cin>>tc;
while(tc--)
{
    int a[3]; int s=0;
    for(int i=0;i<3;++i)cin>>a[i],s+=a[i];
    sort(a,a+3);
    if(a[0]+a[1] < a[2]) cout<<a[0]+a[1]<<endl;
    else
    {
        cout<<s/2<<endl;
    }


}

}
int main()
{

std::ios::sync_with_stdio(false);
cin.tie(0);cout.tie(0);

ha();
return 0;
}
