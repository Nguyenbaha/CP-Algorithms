#include <bits/stdc++.h>
using namespace std;
 #define int long long
 #define prec(n) fixed<<setprecision(n)
#define bye cout<<endl;return
const int N = 2e5+5 ;
int T=1;

/*

─────────▄──────────────▄
────────▌▒█───────────▄▀▒▌
────────▌▒▒▀▄───────▄▀▒▒▒▐
───────▐▄▀▒▒▀▀▀▀▄▄▄▀▒▒▒▒▒▐
─────▄▄▀▒▒▒▒▒▒▒▒▒▒▒█▒▒▄█▒▐
───▄▀▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▀██▀▒▌
──▐▒▒▒▄▄▄▒▒▒▒▒▒▒▒▒▒▒▒▒▀▄▒▒▌
──▌▒▒▐▄█▀▒▒▒▒▄▀█▄▒▒▒▒▒▒▒█▒▐
─▐▒▒▒▒▒▒▒▒▒▒▒▌██▀▒▒▒▒▒▒▒▒▀▄▌
─▌▒▀▄██▄▒▒▒▒▒▒▒▒▒▒▒░░░░▒▒▒▒▌
─▌▀▐▄█▄█▌▄▒▀▒▒▒▒▒▒░░░░░░▒▒▒▐
▐▒▀▐▀▐▀▒▒▄▄▒▄▒▒▒▒▒░░░░░░▒▒▒▒▌
▐▒▒▒▀▀▄▄▒▒▒▄▒▒▒▒▒▒░░░░░░▒▒▒▐
─▌▒▒▒▒▒▒▀▀▀▒▒▒▒▒▒▒▒░░░░▒▒▒▒▌
─▐▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▐
──▀▄▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▄▒▒▒▒▌
────▀▄▒▒▒▒▒▒▒▒▒▒▄▄▄▀▒▒▒▒▄▀
───▐▀▒▀▄▄▄▄▄▄▀▀▀▒▒▒▒▒▄▄▀
──▐▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▀▀

*/
// Here
bool ok( )
{

}
//here

void never_give_up()
{

}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> T;
    while(T--)
{
    never_give_up();
 }


}








    // ham lazy :Xét việc cộng thêm một số vào
    //các giá trị ở tất cả các nút của cây.
  void down(TreapNode *n)
  {
      // if n không tồn tại thì t thoát đệ quy
      // cộng giá trị thêm vào vào giá trị của root n
      n->v += n->lazy;
      // if cây bên trái của root không rỗng
      // -> ta update các phần tử cây bên trái
      // làm tương tự với cây ben phải

      // sau đó: gán lazy tại n = 0l
      n->lazy = 0;
  }





  TreapNode *merge(TreapNode *a, TreapNode *b)
  {
      // nếu a || b rỗng thì kết thúc đệ quy
      // tại lượt ấy
      //if ta hợp nhất theo độ ưu tiên của cây a
      {
          // thực hiện lazy tại cây a;
          down(a);
          // còn lại vẫn là các bước khi ghép 2 cây và update
      }
      // trường hợp: theo độ ưu tiên cây b
      // ta làm tương tự như cây a;
  }

 void split(TreapNode *t, int k,
            TreapNode *&a, TreapNode *&b)
{
       // lazy trên cây t
       down(t);
       // thực hiện thao tác tách cây như bình thường
       // sau đó phải update lại cây a,b;
}


    void updateRangeAdd(int k1, int k2, int value)
    {
        // thực hiện tách cây t, thành 3 cây: t1,t2,t3;
        TreapNode *t1, *t2, *t3;
        split(t, k1, t1, t2);
        split(t2, k2+1, t2, t3);
        // nếu cây t2 tồn tại, thực hiện update theo yêu cầu
        t2->lazy += value;
        // sau đó hợp nhất 3 cây t1,t2,t3 thành cây t là xong!
    }
