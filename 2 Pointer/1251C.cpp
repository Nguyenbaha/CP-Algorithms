#include<bits/stdc++.h>
using namespace std;
int T;
int main()
{
     ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>T;
    while(T--)
    {
        string s;
        cin >> s;
        vector<int> ans, od, ev;
        for(auto c: s)
            if(c%2==0)
                ev.push_back(c-'0');
            else
                od.push_back(c-'0');
        int n = ev.size(), m = od.size();
        if( n == 0)
        {
            for(auto e: od)
                cout << e;
            cout<< endl;
            continue;
        }
        if( m == 0)
        {
            for(auto e: ev)
                cout << e;
            cout<< endl;
            continue;
        }
        int i=0, j =0;
        while(i < n || j < m)
        {
            if(ev[i] < od[j] && i<n || j==m)
                ans.push_back(ev[i++]);
            else
                ans.push_back(od[j++]);
        }
        for(auto e: ans)
            cout<<e;
        cout<<endl;
    }
}