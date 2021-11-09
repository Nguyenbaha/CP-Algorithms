#include<bits/stdc++.h>
using namespace std;
#define int long long
const int c = 1e9+7;
 // Hàm phân tích thành dạng 2^s *d
int s,d;
   void factor(int n) {
       s = 0;
       while (n % 2 == 0) {
           s++;
           n = n /2;
       }
       d = n / s;
   }

   int power( int a, int b, int c){
       int ans = 1;
       for (int i = 1; i <= b; i++){
           ans = ans * a;
           ans = ans % c;
       }
       return ans;
   }


   // Hàm kiểm tra xem Nếu ad  ≠ 1 (mod N) và (ad)2^r  ≠ -1 (mod n) với mọi r từ 0 đến s - 1 thì N không phải là số nguyên tố . Trả về false nếu không phải số nguyên tố.
   bool check( int s, int d, int n, int a) {
      if (n == a) return true;
      int p = power(a, d, n);
      if (p == 1) return true;
      while (s--){
          if (p == n - 1) return true;
          p = p * p % n;
      }
      return false;
   }

  // Kiểm tra n với các a khác nhau. True nếu n là số nguyên tố, false nếu n là hợp số.
   bool isPrime(int N) {
       if (N < 2) return false;
       if (N == 2) return true;
      // int s, d;
       factor(N - 1);
       return check(s, d, N, 2) && check(s, d, N, 7) && check(s, d, N, 61);
   }
signed main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
      
       int n;
       cin >> n;

      if(n%2==0 || !isPrime(n))
      {
        cout <<"NO";
      }
      else
        cout <<"YES";
    
}