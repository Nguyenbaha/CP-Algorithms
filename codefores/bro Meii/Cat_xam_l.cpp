#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁

void Never_give_up()

{
int n=10;// cin>>n;
int a[n];
map<int,int> mp;
for(int i=1;i<=n;++i)
{
   cin>>a[i]; mp[a[i]]++;
}
bool check = 0;
for(auto e: mp) if(e.second==5) {check==1; break;}
if(check) cout<<"grumpy";
else cout<<"normal";
}

signed main() {
ios::sync_with_stdio(false);
cin.tie(0);
int q,cnt;
string res;
cnt=0;
    for(q=0;q<10;q++){
       //cout<<q<<endl;
        fflush(stdin);
        getline(cin,res);
        for(int i=0;i<res.size();i++) res[i]=tolower(res[i]);
        if(res=="great"||res=="great!"||res=="cool"||res=="not bad"||res=="don't think so"||res=="don't touch me!"||res=="don't touch me"){
            cout<<"normal"<<endl;
            return 0;
        }else if(res=="don't even"||res=="worse"||res=="terrible"||res=="are you serious?"||res=="are you serious"||res=="go die in a hole"||res=="no way"){
            cout<<"grumpy"<<endl;
            return 0;
        }else if(res=="no") cnt++;
    }
    if(cnt==5) cout<<"normal"<<endl;
    else cout<<"grumpy"<<endl;

 return 0;
}



