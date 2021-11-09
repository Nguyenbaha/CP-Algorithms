#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
bool sortless(const string &a, const string &b)
{
    return a.size()<b.size();
}
void ha()
{
    int n; cin>>n;
    vector<string>s(n);
    for(int i=0;i<n;++i)cin>>s[i];
    sort(s.begin(),s.end(),sortless);
    for(int i=0;i<n-1;++i)
        if(s[i+1].find(s[i])==-1)
    {
        cout<<"NO"; exit(0);
    }
    cout<<"YES"<<endl;
    for(auto e: s)cout<<e<<endl
;}
int main()
{

std::ios::sync_with_stdio(false);
cin.tie(0);cout.tie(0);

ha();
return 0;
}




