

#include <bits/stdc++.h>
using namespace std;



 void sol()
{
	int n;
    cin >>n;
    vector< int> a(n),b(n);
    for(auto &e: a)
        cin >> e;
    for(auto &e: b)
        cin >> e;
    sort(a.rbegin(),a.rend());
    sort(b.rbegin(),b.rend());
    vector<int> fa(200006,0),fb(200006,0);
    fa[0]=0;
    fb[0]=0;
    for(int i=0; i < n; ++i)
    {
        fa[i+1] = fa[i-1]+a[i];
        fb[i+1] = fb[i-1]+b[i];
    }
    int ans= 0;
    int s1 = accumulate(a.begin(),a.end(),0);
    int s2 = accumulate(b.begin(),b.end(),0);
    if(s1 > s2)
    {
        int limit =  n - n/4;
        int l=1, r= n, mid;
        while(l <= r)
        {
            mid=(l+r)>>1;
            int tmp = fa[mid] - fa[l-1];
            int tm = fb[mid] - fb[l-1];
            if(tmp >= tm)
            {
                r = mid-1;
                ans = mid;
            }
            else l=mid+1;
        }
        cout<< ans<<endl;
        return ;
    }
    else
    {
        ans  = 0;
        while(1)
        {
            s1-=a.back();
            a.pop_back();
            s1+=100;
            ans++;
            if(s1>=s2) break;
            else continue;
        }
        cout<<ans<<endl;
        return;
    }

    cout<< ans<<endl;
}

signed main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
   int q;
    cin >> q;
    while (q--){
        
        sol();
        cout<<endl;
    }
    return 0;
}

