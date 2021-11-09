#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
void ha() {
string a,b;
cin>>a>>b;
int i=0;
while(a[i]=='0')i++;
a=a.substr(i,a.size()-i+1);
int j=0;
while(b[j]=='0') j++;
b=b.substr(j,b.size()-j+1);
if(a.size()>b.size()){
         cout<<'>';

    }
    else if(a.size()<b.size()){
         cout<<'<';

    }
    else if (a>b){
        cout<<'>';

    }
    else if (a<b){
        cout<<'<';

    }
    else if (a==b){
        cout<<'=';
    }
}

signed main() {
ios::sync_with_stdio(false);
cin.tie(0);

int nbTests=1;
//cin >> nbTests;
for (int iTest = 0; iTest < nbTests; ++iTest) {
ha();
}
 return 0;
}


