#include<bits/stdc++.h>
using namespace std;
int n;


int main()
{
      cin >> n;
      while(n--)
      {
            string s;
            stack<char>st;
            cin >> s;
            for(int c =0 ; c <s.size();++c)
                  if(st.size()==0)
                  {
                        st.push(s[c]);
                  }
                  else
                  {
                        if(s[c] =='A')
                              {
                                    
                                          st.push(s[c]);
                              }
                        else
                        {
                              if(st.size()!=0)
                                    st.pop();
                              else st.push(s[c]);
                        }
                  }
                  cout << st.size()<<endl;
                  
      }
}