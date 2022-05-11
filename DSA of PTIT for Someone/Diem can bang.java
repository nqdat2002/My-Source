package OOPs.Mang;

import java.util.Scanner;

public class J02014 {
    public static void main(String [] args){
        Scanner ip = new Scanner(System.in);
        int t = ip.nextInt();
        while(t > 0){
            int n = ip.nextInt();
            int [] a = new int[n];
            int sum = 0;
            for(int i = 0; i < n; ++i){
                a[i] = ip.nextInt();
                sum += a[i];
            }
            System.out.println(BalancePoint(a, n, sum));
            t--;
        }
        ip.close();
    }
    public static int BalancePoint(int [] a, int n, int sum){
        int s = 0;
        for(int i = 0; i < n; i ++){
            s += a[i];
            if(s == sum + a[i] - s)
                return i + 1;
        }
        return -1;
    }
}