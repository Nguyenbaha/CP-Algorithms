#include<bits/stdc++.h>
using namespace std;
int T;
int main()
{
     ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<int> a(n),b(n);
    for(auto &e: a)
        cin>> e;
    for(auto &e: b)
        cin>> e;
    int i = 1, j = 1;
     vector<long long> c;
     for(int i=0;i <n; ++i)
        for(int j=0;j <n;++j)
            c.push_back(a[i]+b[j]);
    cout<< *min_element(c.begin(),c.end());

}