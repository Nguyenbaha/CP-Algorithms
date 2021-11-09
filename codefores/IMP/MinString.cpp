#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,b;
    cin>>a>>b;
    vector<char> v;
    for(char c: a)
        v.push_back(c);
    for(char c: b)
        v.push_back(c);
    sort(v.begin(),v.end());
    for(int i=0;i<a.size();++i)
    cout<<v[i];
}
