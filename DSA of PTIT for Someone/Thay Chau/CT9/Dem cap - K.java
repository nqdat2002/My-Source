package OOPs.Mang;

import java.util.Arrays;
import java.util.Scanner;

public class J02027 {
    public static void main(String [] args){
        Scanner ip = new Scanner(System.in);
        int t = ip.nextInt();
        while(t-->0){
            int n = ip.nextInt();
            int k = ip.nextInt();
            int [] a = new int[n];
            for(int i = 0; i < n; ++i) a[i] = ip.nextInt();
            Arrays.sort(a);
            long res = 0;
            for(int i = 0; i < n - 1; i ++){
                int l = Find_First_Pos(a, a[i] + k, i + 1, n - 1);
                if(l != -1){
                    res += (l - i);
                }
            }
            System.out.println(res);
        }
        ip.close();
    }
    public static int Find_First_Pos(int [] a, int x, int l, int r){
        int res = -1;
        while(l <= r){
            int m = (l + r) / 2;
            if(a[m] < x){
                res = m;
                l = m + 1;
            }else r = m - 1;
        }
        return res;
    }
}