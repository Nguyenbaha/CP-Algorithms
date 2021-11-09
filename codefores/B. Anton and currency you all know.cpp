#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int mod=1e9+7;
//😁😁😁😁😁😁😁😁😁😁😁
void ha()
{

string s;
cin>>s;
vector<int> chan,le;
for(int i=0;i<s.size();++i)
{
    if((int)s[i]%2==0)
        chan.push_back((int)s[i]);
    else le.push_back((int)s[i]);
}
if(chan.size() == 0  || le.size()==s.size())
{
    cout<<-1;
}
else
{
        int hi=-1;
   for(int i=0;i<s.size();++i)
   {
       if((int)s[i]%2==0 )
        {    hi=i;
            if((int)s[i] < (int)s[s.size()-1])
                break;} }

    if(hi!=-1)
        swap(s[hi],s[s.size()-1]);

   cout<<s;


}
}
int main()
{

std::ios::sync_with_stdio(false);
cin.tie(0);cout.tie(0);

ha();
return 0;
}




