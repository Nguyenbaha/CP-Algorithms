
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
    int n; cin>>n;
    string a,b; cin>>a>>b;
    set<char> s1;
    set<char> s2;
  //  if(a==b) {cout<<"Yes"<<endl; continue;}
     int cnt=0; char l,r;int f;
    for(int i=0;i<a.size();++i)
    {
        int j=i;
        if(a[i]!=b[j])
        {cnt++;
        s1.insert(a[i]);
        s2.insert(b[j]);}
    }
    //cout<<a<<' '<<b<<endl;
    if(cnt%2!=0 || s1.size()!=1 || s2.size()!=1)
        cout<<"No"<<endl;
    else
    {
        cout<<"Yes"<<endl;

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




