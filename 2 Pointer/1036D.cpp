#include<bits/stdc++.h>
using namespace std;
int T;
int main()
{
	 ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
  T=1;
    while(T--)
    {
    	vector<long long> a,b;
    	int n;
    	cin >> n;
    	a.resize(n);
      long long s1=0,s2=0;
    	for(long long &i: a)
    		cin>> i, s1+=i;
    	int m;
    	cin >> m;
    	b.resize(m);
    	for(long long &i: b)
    		cin >> i, s2+=i;
      if(s1!=s2)
      {
        cout <<-1;
        return 0;
      }
      long long i=0, j=0, ans =0, l=0,r=0;
      s1 = a[0], s2 = b[0];

      while(i < n || j < m)
      {
        if(s1 == s2)
        {
          ans ++;
          i++;
          j++;
          s1 = a[i];
          s2 = b[j];
        }
        else if(s1 < s2)
            {
              i ++;
              if(i == n)
                break;
              s1 += a[i];
            }
            else
            {
                j ++;
                if(j == m)
                {
                  break;
                }
                s2 += b[j];
            }
      }
      cout << ans;
}
}


