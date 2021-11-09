/*#include <bits/stdc++.h>
using namespace std;

 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    vector <int> a(n);
    for(auto &e: a)
    	cin >> e;
    for(int i=1; i <= m ; ++i)
    {
        int tmp;
        cin >> tmp;
        int ans  = lower_bound(a.begin(),a.end(),tmp) - a.begin();
        cout << ans << ' ';
    }
}*/
#include <bits/stdc++.h>
using namespace std;

 
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    vector <int> a(n), b(m);
    for(auto &e: a)
        cin >> e;
    for(auto &e: b)
        cin >> e;
    int i =0 ;
    for(int j =0 ; j <  m ; ++ j)
    {
        while(i < n && a[i] < b[j])
            i++;
        cout << i <<' ';
    }
}
