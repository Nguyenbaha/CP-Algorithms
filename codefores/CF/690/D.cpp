#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
// @ by HaNguyen -- 2020

void Never_give_up()

{
    int n;
    cin>>n;
    vector<int> a,b;
     set<int> s;
     ll sum=0;
    for(int i=0;i<n;++i)
    {
        int tmp;
        cin>>tmp;
        a.push_back(tmp);
        s.insert(tmp);
        sum += tmp;
    }
    b=a;

    reverse(a.begin(),a.end());
//    cout<<*max_element(a.begin(),a.end())<<endl;
//    return;
   if(s.size()==1)
   {
       cout<<0<<endl;
       return;
   }
   if(a==b)
   {
       cout<<(n+1)/2<<endl;

   }
   else
   {
       int ans = n-1;
       int r = (n+1)/2;
       int mx = *max_element(b.begin(),b.begin());
       for(int i=0;i<n;++i)
        if(b[i]==mx)
        b[i] = 0;
    for(auto e: b)
        cout<<e<<' ';
    cout<<endl;
    return;
       ll s1=0,s2=0;
       int c=0,cc=0;
       for(int i=0;i<n;++i)
       {
           if(b[i]!=0)
           {
               s1+=b[i];
               c++;
           }
           else break;
       }
       for(int i=n-1;i>=0;--i)
            if(b[i]!=0)
            {
                s2+=b[i];
                cc++;
            }
            else break;
       map<int,int> mp;
       for(int i=0;i<n;++i)
        mp[b[i]]++;
        cout<<c<<' '<<c<<endl;
        return;
       if(s1+s2+mp[mx]*mx == sum   )cout<<c+cc<<endl;
       else if(mp[mx]*mx == s1) cout<<--c<<endl;
       else if(mp[mx]*mx == s2) cout<<--cc<<endl;
       else cout<<n-1<<endl;
   }

}

signed main() {
ios::sync_with_stdio(false);
cin.tie(0);

int tc;
cin >> tc;
while(tc--)
{
Never_give_up();
 }

 return 0;
}


