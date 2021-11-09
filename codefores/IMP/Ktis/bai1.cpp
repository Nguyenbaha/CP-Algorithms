#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁

void Never_give_up()

{
    int n; cin>>n;
    deque<int> q;
    if(n%2==0){
    for(int i=0;i<n;++i)
    {
        int tmp;
        cin>>tmp;
        if(i&1) q.push_back(tmp);
        else q.push_front(tmp);
    }
    for(int i=0;i<n;++i)

    {
        cout<<q.back()<<' ';
        q.pop_back();
    }

    }
    else
    {
      for(int i=0;i<n;++i)
    {
        int tmp;
        cin>>tmp;
        if(i&1) q.push_front(tmp);
        else q.push_back(tmp);
    }
    for(int i=0;i<n;++i)

    {
        cout<<q.back()<<' ';
        q.pop_back();
    }
    }

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



