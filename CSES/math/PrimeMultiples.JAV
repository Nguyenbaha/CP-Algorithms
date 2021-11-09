import java.util.*;
import java.io.*;
class contest
{
    public static void main(String args[]) throws IOException
    {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        long num=0,ans=0;
        int k=0;
        String ar[]=br.readLine().split(" ");
        num=Long.parseLong(ar[0]);
        k=Integer.parseInt(ar[1]);
        long prime[]=new long[k];
        String gb[]=br.readLine().split(" ");
        for(int i=0;i<k;i++)
        {
            prime[i]=Long.parseLong(gb[i]);
        }
        int size=0,cnt=0;
        long prod=1;
        size=(int)Math.pow(2,k);
        for(int i=1;i<size;i++)
        {
            for(int j=0;j<k;j++)
            {
                if((i & (1<<j))>0)
                {
                    prod*=prime[j];
                    ++cnt;
                }
            }
            if((cnt & 1)==1)
            {
                ans+=num/prod;
            }
            else
            {
                ans-=num/prod;
            }
            prod=1;
            cnt=0;
        }
        System.out.println(ans);
    }
}