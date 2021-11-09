#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s)
{
    string r = s;
    reverse(s.begin(), s.end()) ;
    if(r == s)
        return true ; 
    else
        return false ;
    
}
int main()
{
   
    string s;
    cin >> s;
    if(isPalindrome(s))
        cout << "true" ;
    else
        cout << "false" ;
    return 0;
}

